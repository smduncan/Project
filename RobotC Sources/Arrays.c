/* Arrays Demo
* 08/02/2015 - Stuart Duncan
* Read the colour sensor for 10 seconds and read the colour data into an array.
* Display each value
*/

#define LIGHT S3

task main()
{

	int i;
	int lightval;
	int array [100];

	clearTimer(T1);
	while (time1[T1] < 10000) {

		if (lightval != getColorName (LIGHT))  {
			i++;
			array[i] = lightval;
		}
		lightval = getColorName (LIGHT);
		delay (1000);


	}

	for (int lnum; lnum > i; lnum++) {
		displayTextLine (lnum,"%i", array[lnum]);

	}

}
