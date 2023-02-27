import javax.servlet.*;
import javax.servlet.http.*;
import java.io.*;

public class UserPreferenceServlet extends HttpServlet {
  public void doGet(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
    // Get the user's preferences from the request parameters
    String color = request.getParameter("color");
    String hobby = request.getParameter("hobby");

    // Create a cookie with the user's preferences
    Cookie colorCookie = new Cookie("color", color);
    colorCookie.setMaxAge(60 * 60 * 24 * 365); // Set the cookie to last for one year
    Cookie hobbyCookie = new Cookie("hobby", hobby);
    hobbyCookie.setMaxAge(60 * 60 * 24 * 365);

    // Add the cookies to the response
    response.addCookie(colorCookie);
    response.addCookie(hobbyCookie);

    // Display a message to the user
    response.setContentType("text/html");
    PrintWriter out = response.getWriter();
    out.println("<html><body>");
    out.println("<h1>Preferences saved!</h1>");
    out.println("<p>Color: " + color + "</p>");
    out.println("<p>Hobby: " + hobby + "</p>");
    out.println("</body></html>");
  }

  public void doPost(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
    // Get the user's cookies
    Cookie[] cookies = request.getCookies();

    // Read the user's preferences from the cookies
    String color = null;
    String hobby = null;
    if (cookies != null) {
      for (Cookie cookie : cookies) {
        if (cookie.getName().equals("color")) {
          color = cookie.getValue();
        } else if (cookie.getName().equals("hobby")) {
          hobby = cookie.getValue();
        }
      }
    }

    // Display the user's preferences
    response.setContentType("text/html");
    PrintWriter out = response.getWriter();
    out.println("<html><body>");
    out.println("<h1>Your preferences:</h1>");
    out.println("<p>Color: " + color + "</p>");
    out.println("<p>Hobby: " + hobby + "</p>");
    out.println("</body></html>");
  }
}



<form action="/UserPreferenceServlet" method="post">
  <label>Color:</label>
  <input type="text" name="color"><br>
  <label>Hobby:</label>
  <input type="text" name="hobby"><br>
  <input type="submit" value="Save Preferences">
</form>





Results-driven Computer Science student from Harcourt Butler Technical University,kanpur passionate about developing user-friendly
software applications. Excellent problem-solving skills and ability to
perform well in a team. Looking to build and work with cutting edge
technologies as well as grow and develop my own skills as a coder.
