Please use XAMPP and Tomcat 8.5 and Modern Browsers like Chrome/Firefox
Please stay connected to the Internet as the Bootstrap and jQuery are CDN source based.

XAMPP:
Give Administration Permission

Tomcat 8.5:
Make sure tomcat is not running
In the eclipse's project explorer, in "Servers" folder there should be "Tomcat v8.5 Server at localhost.server"
Double click on that file
You should see a configuration for "Server Locations"
Make sure it is on the 2nd Option | "Use Tomcat Installation (takes control of Tomcat installation)"
Configure "Server path" to match your local tomcat v8.5 folder
Save the config

Right click tomcat on the Servers viewer within eclipse
Click properties
Make sure the that it is set to "Location: /Servers/Tomcat v.5 Server at localhost.server"
To do this you can go to General > Switch Location > Apply and Close

Start XAMPP and enable Apache & MySQL
Run CreateDatabase.java, CreateProductsTable.java, CreateRegTable.java, InsertData.java from /src
Right click the project and run the whole project on the tomcat server
Visit the website in a modern browser at http://localhost:8080/OnlineShopRCFE5233/

Images and Assets (Educational Purposes):
https://icons8.com
https://jeremyzuckermusic.com

Libraries:
Bootstrap
jQuery