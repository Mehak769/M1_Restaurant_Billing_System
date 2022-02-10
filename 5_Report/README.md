## REPORT:
# Admin:
Restaurant billing system will help not only the restaurant but also the customers in getting a quality service. The whole system is entertained by the admin who is responsible for managing the account of all the actors attached to the system. Admin will help all the users to maintain their data in the system. The management will also help the admin but by providing All the authorities in order to provide access in every account of the system. Admin also sustain his personal information into the system and can manipulate the database in order to modify or delete the information. The attributes are defined below:

* Admin_ID: The system manager in providing and Identity Number to each admin person to sustain their account.
* Name: This attribute will hold the name of each admin who is the key entity to the system.
* Contact No.: Admin providers contact number to the system which is saved in this attribute.
* Email Address: The email address of the admin if saved in this attribute in order to connect with other users.
* Shift: Admin work in different shift if the management provides admin power to more than one person.

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