import java.io.IOException;
import java.io.PrintWriter;
import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.PreparedStatement;

import javax.servlet.ServletException;
import javax.servlet.annotation.WebServlet;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;


/**
 * Servlet implementation class CreateTable
 */
@WebServlet("/CreateTable")
public class CreateProductsTable extends HttpServlet {
	private static final long serialVersionUID = 1L;
       
    /**
     * @see HttpServlet#HttpServlet()
     */
    public CreateProductsTable() {
        super();
        // TODO Auto-generated constructor stub
    }

	/**
	 * @see HttpServlet#doGet(HttpServletRequest request, HttpServletResponse response)
	 */
	protected void doGet(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
		// TODO Auto-generated method stub
		PrintWriter out = response.getWriter();
		
		out.println("<html>");
		out.println("<body>");
		Connection conn = null;
		try {
			//STEP 2: Register JDBC driver
			Class.forName("com.mysql.jdbc.Driver");
			//STEP 3: Open a connection
		      out.println("Connecting to database...");
		      conn = DriverManager.getConnection("jdbc:mysql://localhost/chakkarin","root" ,"" ); 
			   // change databse name to localhost/YournameShop
		    //STEP 4: Execute a query 
		      /* out.println("Creating ..");
		      stmt = conn.createStatement();
		      
		      out.println("Creating table in given database...");
			    stmt = conn.createStatement();
			    
			    String sql = "CREATE TABLE IF NOT EXISTS products"+
			                 "(id INTEGER not NULL, " +
			                 " product VARCHAR(50), " + 
			                 " brand VARCHAR(50), " +
			                 " price FLOAT, " +
			                 " qty INTEGER, " +
			                 " PRIMARY KEY ( id ))";

			    stmt.executeUpdate(sql);
			    out.println("Created table in given database...");
			    */
		      String sql = "CREATE TABLE IF NOT EXISTS products(id INTEGER NOT NULL, producttype VARCHAR(255), productname VARCHAR(255), price FLOAT, qty INTEGER, img VARCHAR(255), PRIMARY KEY (id))";  
		      PreparedStatement ps = conn.prepareStatement(sql);
			    ps.executeUpdate();
			    out.println("Created table in given database...");
		      
		} catch (Exception e) {
		e.printStackTrace();
		}
		
		out.println( "</body>");
		out.println( "</html>");
	}

	/**
	 * @see HttpServlet#doPost(HttpServletRequest request, HttpServletResponse response)
	 */
	protected void doPost(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
		// TODO Auto-generated method stub
	}

}
