import java.io.IOException;
import java.io.PrintWriter;
import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.Statement;

import javax.servlet.ServletException;
import javax.servlet.annotation.WebServlet;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;

/**
 * Servlet implementation class InsertData
 */
@WebServlet("/InsertData")
public class InsertData extends HttpServlet {
	private static final long serialVersionUID = 1L;
	private Connection connect = null;
	private Statement statement = null;
       
    /**
     * @see HttpServlet#HttpServlet()
     */
    public InsertData() {
        super();
        // TODO Auto-generated constructor stub
    }

	/**
	 * @see HttpServlet#doGet(HttpServletRequest request, HttpServletResponse response)
	 */
	protected void doGet(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
		// TODO Auto-generated method stub
        PrintWriter out = response.getWriter();
		
		try{
			out.println( "Registering  JDBC driver");
			//STEP 1: Register JDBC driver. This will load the MySQL driver, each DB has its own driver
			Class.forName("com.mysql.jdbc.Driver");
			out.println( "Seting up the connection with the DB");
			//STEP 2: Open a connection. Setup the connection with the DB
			connect = DriverManager.getConnection("jdbc:mysql://localhost/chakkarin","root" ,"" );
            // STEP 3: Statements allow us to  issue SQL queries to the database
			statement = connect.createStatement();
			//STEP 4: declare a query
			String sql = "INSERT INTO products (id, producttype, productname, price, qty, img) VALUES" +
		    		"(101,'Licence Key', '1 Month Subcription', 10, 1000, '/img/1month.png'),"+
		    		"(102,'Licence Key', '3 Month Subcription', 28, 1000, '/img/lind-hoodie.png'),"+
		    		"(103,'Licence Key', '6 Month Subcription', 55, 1000, '/img/lind-hoodie.png'),"+
		    		"(104,'Licence Key', '12 Month Subcription', 100, 1000, '/img/lind-hoodie.png')," +
		    		"(105,'T-Shirt', 'l<3ve tee i', 30, 1000, '/img/love-t-i.png'),"+
		    		"(106,'T-Shirt', 'l<3ve tee ii', 30, 1000, '/img/love-t-ii.png')," +
		    		"(107, 'Accessory', 'JEREMY ZUCKER X THE M JEWELERS CHARM NECKLACE', 195, 1000, 'img/lind-necklace.png');";
			//STEP 5: execute a query
			statement.executeUpdate(sql);
			out.println( "Data insert.....");
			
		}catch (Exception e){
			
		}// Exception
	}

	/**
	 * @see HttpServlet#doPost(HttpServletRequest request, HttpServletResponse response)
	 */
	protected void doPost(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
		// TODO Auto-generated method stub
	}

}
