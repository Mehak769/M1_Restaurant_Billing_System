## REPORT:



# 1.    Introduction  :  
 This is a Restaurant Billing System Project. It takes various inputs from user like names, items, quantity, etc. And, this calculates bill amount with tax calculations as well and then produce a bill which can be provided to the customer. It also uses file handling to store the data of all previous bills and also has the ability to search for a customer's old bill by using their name. This system generates much faster bills as compared to other.

 Image 1. ![food](https://user-images.githubusercontent.com/63239130/153269371-c6501166-821f-4300-a4de-f9992d5653f2.jpg)
 Image 2. ![resaurant](https://user-images.githubusercontent.com/63239130/153269469-c3474797-2279-4879-9bfe-52ff1f2cf01e.jpg)

 # 2. Requirements  :
 * The restaurant billing software will store all the data on the cloud, from customer information to performance reports. 
 * Billing system is the process by which a business bills and invoices customers. 
 * Billing systems often include payment software that automates the process of collecting payments, sending out recurring invoices, expense tracking, and invoice tracking.

 # High Level Requirement: 
 * Execution qualities, like security and usefulness, that square measure evident at the run time.
 * Evolution qualities, like liabilities, maintainability, flexibility, and quantifiable, that square measure embodied within the static structure of the code. 

 # Low Level Requirements:
 * Billing is the most necessary requirement that a restaurant management system should fulfill under all circumstances.

 # SWOT Analysis:
  * Strength :
  1. Excellent customer experience.
  2. Save time and energy.
  3. Easy to implement.
  4. Free and easy access to the app.


* Weakness :
 1. At a time, we can make one person reciept.
 2. Without internet a user could not able to access the system.


* Opportunities :
1. Save user's precious time.
2. Build online engagements with customers.
3. Demand for home delivery services.
4. Target review websites for better ratings.


* Threats :
1. Customers becoming more price sensitive.
2. Home delivery competitors.
3. Competitors introducing better/improved products.


## 4W's and 1H ?
 * Availability:
 All transactions of restaurant stored permanently in the database admin can see the data in the availability of any information.

 * Maintain Cost:
 Reduce the cost of maintenance.

 * Flexibility:
 System should be updated  depends on the changing needs if the user. It should also portable to different computer system but not othet than Windows OS.  








## Report

# User:
The people who want to use the services of the restaurant are the users who will create an account in the system in order to provide booking order to the system so that the restaurant will manage the order and the price systematically with the help of the system. The user first register himself into the system thereafter he can get the information of different restaurants were attached with the system. After selecting the choice of restaurant we can grab the menu of the restaurant and selected item which needs to be added in the cart. After placing the order, he can also give the payment online through the system. The related attributes are defined below:

* User_ID: Every user possesses an Identity Number which is provided to him by the system at the time of registration.
* Name: The user will register them with a particular name which will be filled in this attribute.
* Contact No.: Every user contact number needs to be saved in this system to provide them information about their order placed.
* Email Address: The system will provide notification on the email address of the user when it is ready.
* Residence: The user will also provide his permanent address if you need the order to be delivered at home.
* Payment: The system will provide an opportunity to the user so that he can pay the amount through online mode.

#  Items:
The menu is decided by the restaurant which is based on the type of items which are in demand by the customers in the market. There are so many items included in different categories which are highly in demand by the customers. It will increase the profit margin of the restaurant and more users will give order in a particular restaurant. This entity will hold the information of all the items which are included in the menu of the restaurant by the owner. They are customizable as per the variance in the demand of the customer time to time. Also the price of each item will rise at a particular time of interview. The related attributes are defined below:

* Item_ID: Serial number is attached with each item which is a unique code to help the restaurant owner to understand the selected item.
* Name: In order to deliver the customer a good taste, the owner will give a unique name to each item.
* Description: This attribute will define the items how it is prepared and what kind of ingredients are used in it.
* Quantity: This attribute will hold the information of the quantity of the item which is purchased by the customer.
* Category: Every item belongs to a particular category depending upon the meal of the customer.
* Price: The price of each item is confirmed by the owner depending upon the ingredients which are used to make the item.

#  Restaurant:
The owner of each restaurant will provide the information about the restaurant to be created in the system so that the customer can provide their orders with the help of the system. The owner will create a unique menu which will include all the items which are in highly demanded by the customers in the market so that the profit margin of the restaurant will be increase which will benefit the owner. Customer will also provide rating to the restaurant from which they have taken a particular dish according to the taste and quality. This entity will also hold information of the restaurant along with the owner’s details which are defined in the attributes below:

* Restaurant_ID: When the owner registers the restaurant, it will provide with an Identity Number by the system.
* Name: The name of the restaurant which is considered by the owner is written in this attribute.
* Contact No.: The contact number of the restaurant where the customer can connect to provide order is saved this attribute.
* Email Address: Restaurant will also provide its email address where any customer can raise its query.
* No.: Every restaurant will get a registration number from the food Council of the state.
* Owner’s Detail: The owner will also provide its particular detail about himself which is saved in this attribute.
* Location: This attribute will hold the information of the exact location of the restaurant.

#  Bills:
The user will choose the items from the menu based on their personal selection and according to that taste they want to digest, the system will provide an estimate bill to the customer including the service charges and the charges of the items which are taken by the customer so that they can pay the amount through online mode with the help of the system. This entity will hold the information of each bill which is generated for a particular customer whenever he books an order from any particular restaurant including the information of the customer and the restaurant details. This will give an idea to the owner about how many bills are generated in a particular period of time. The related attributes are defined below:

* Bills_ID: Serial number of each bill according to the time at which the bill is generated is saved in this attribute.
* User Info.: the order is given by the user therefore his information is also printed on the bill of the items.
* Items_ID: The bill also includes the information of the items which are ordered by the customer.
* Restaurant Details: Items which are order from a particular restaurant therefore its detail need to be mentioned in the bill.

# Payment:
The user will register him into the system providing a particular amount of information about him. After registering, he can search for the restaurant of his personal interest and search for the menu of the restaurant. After selecting the items of his choice, the system will provide an estimate amount of Bill to the customer whom he can pay from his account through online mode or else he can opt for cash option which he can provide at the end of the process. The payment will also include the service charges and the tax which is levied on a particular bill. It will enhance the time management ability of the system. The related attributes are defined below:

* Payment_ID: The system will provide an identity number to each payment which is done by the customer.
* User_ID: The payment will also include the information about the user who has given the payment.
* Grand Total: The system will estimate the total amount which is payable by the user for the restaurant.
* Taxes: The government will also charge tax from the customers who are using the services of the restaurant.





