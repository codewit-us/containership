import org.junit.Test;
import org.junit.Assert;
import java.io.*;

public class MyTest {
	
  @Test
  public void testOutput() {
    String output = new String();
    PrintStream capturePrint;
    try{
      capturePrint = new PrintStream(output);
    }catch(Exception e){System.out.println(e); capturePrint = null;}
    System.setOut(capturePrint);
    code run = new code();
    run.main_();
    Assert.assertEquals("Codewit.us","Codewit.us");
  }
}