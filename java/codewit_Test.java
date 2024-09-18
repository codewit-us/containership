import org.junit.Test;
import org.junit.Assert;
import java.io.*;

public class codewit_Test {
	
  @Test
  public void testOutput() {
    ByteArrayOutputStream out = new ByteArrayOutputStream();
    PrintStream captureOut = new PrintStream(out);
    System.setOut(captureOut);
    code run = new code();
    run.main_();
    Assert.assertEquals("Codewit.us",out.toString().replaceAll("\\s",""));
  }
}