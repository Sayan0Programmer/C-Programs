import java.io.*;
public class j2c{
	private static void compileC() throws IOException{
		Process p=Runtime.getRuntime().exec("gcc -o H hello.c");
	}
	private static void runC() throws IOException{
		Process proc = Runtime.getRuntime().exec("./H");
		BufferedReader reader = new BufferedReader(new InputStreamReader(proc.getInputStream()));
		String line = "";
		while((line = reader.readLine()) != null){
			System.out.print(line + "\n");
		}
	}
	public static void main(String[] args) throws IOException{
		compileC();
		try{
			Thread.sleep(1000);
		}catch(Exception e){
			System.out.println(e);
		}
		runC();
		System.out.println("Removing created m/c file");
		Process p=Runtime.getRuntime().exec("rm H");
		System.out.println("Thank You...");
	}
}
