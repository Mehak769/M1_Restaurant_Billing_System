














int main()
{

    float total;
    int opt, n, invoiceFound = 0;
    struct orders ord;
    struct orders order;
    char saveBill = 'y';
    char name[50];
    FILE *fp;
    printf("\t============== MEHAK'S KITCHEN ============");
    printf("\n\nPlease enter your desired opearation");

    printf("\n\n 1.Generate Invoice");
    printf("\n 2.Show all Invoices");
    printf("\n 3.Search Invoice");
    printf("\n 4.Exit");

    printf("\n\nYour Choice:\t");
    scanf("%d", &opt);
    fgetc(stdin);

    switch (opt)
    {
    case 1:
        system("cls");
        printf("\nPlease enter the name of the customer:\t");
        fgets(ord.customer, 50, stdin);
        ord.customer[strlen(ord.customer - 1)] = 0;
        strcpy(ord.date, __DATE__);
        1;
        printf("Please enter the number of items:\t");
        scanf("%d", &n);
        ord.numOfItems = n;
        for (int i = 0; i < n; i++)
        {
            fgetc(stdin);
            printf("\n\n");
            printf("Please enter item: %d\t", i + 1);
            fgets(ord.itm[i].item, 20, stdin);
            ord.itm[i].item[strlen(ord.itm[i].item) - 1] = 0;
            printf("Please enter the quantity:\t");
            scanf("%d", &ord.itm[i].qty);
            printf("\nPlease enter the unit price:\t");
            scanf("%f", &ord.itm[i].price);
            total += ord.itm[i].qty * ord.itm[i].price;
        }

        generateBillHeader(ord.customer, ord.date);
        for (int i = 0; i < ord.numOfItems; i++)
        {
            generateBillBody(ord.itm[i].item, ord.itm[i].qty, ord.itm[i].price);
        }
        generateBillFooter(total);

        printf("\nDo you want to save the invoice? [y/n]\t");
        scanf("%s", &saveBill);

        if (saveBill == 'y')
        {
            fp = fopen("RestaurantBill.dat", "a+");
            fwrite(&ord, sizeof(struct orders), 1, fp);
            if (fwrite != 0)
                printf("\nSuccessfully Saved");
            else
                printf("\nError saving");
            fclose(fp);
        }
        break;

    case 2:
        system("cls");
        fp = fopen("RestaurantBill.dat", "r");
        printf("\n ******Your Previous Invoices******\n");
        while (fread(&order, sizeof(struct orders), 1, fp))
        {
            float tot = 0;

            {
                generateBillHeader(order.customer, order.date);
                for (int i = 0; i < order.numOfItems; i++)
                {
                    generateBillBody(order.itm[i].item, order.itm[i].qty, order.itm[i].price);
                    tot += order.itm[i].qty * order.itm[i].price;
                }
                generateBillFooter(tot);
            }
            fclose(fp);
            break;
        }

    case 3:
        printf("\nEnter the name of the customer:\t");
        // fgetc(stdin);
        fgets(name, 50, stdin);
        name[strlen(name) - 1] = 0;
        system("cls");
        fp = fopen("RestaurantBill.dat", "r");
        printf("\n ******Invoices Found******\n");
        while (fread(&order, sizeof(struct orders), 1, fp))
        {
            float tot = 0;
            if (!strcmp(order.customer, name))
            {
                generateBillHeader(order.customer, order.date);
                for (int i = 0; i < order.numOfItems; i++)
                {
                    generateBillBody(order.itm[i].item, order.itm[i].qty, order.itm[i].price);
                    tot += order.itm[i].qty * order.itm[i].price;
                }
                generateBillFooter(tot);
                invoiceFound = 1;
            }
            if (!invoiceFound)
            {
                printf("Sorry the invoice for %s does not exists.", name);
            }
            fclose(fp);
            break;
        }
    }

    printf("\n\n");

    return 0;
}