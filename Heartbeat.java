package studio0;

public class Heartbeat {

	public static void main(String[] args) {
		double time = 0;
		while (true) {
			try {
				Thread.sleep(1000);
				time += 1;
				System.out.println(time+" sec have elapsed");
			}catch(InterruptedException e) {
				e.printStackTrace();
			}
		}

	}

}
