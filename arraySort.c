

/**
 * Name: ChinmayKumbhare
 * Github user id: chinmaykumbhare
 *
 * Issue Statement:
 * Given a sorted array of positive integers, rearrange the array alternately i.e first element
 * should be maximum value, second minimum value, third second max, fourth second min and so on.
 * Program should have good comments to make it easily understable by anyone new to programming.
 * Create a pull request in MaxMinRearrange file in DSA_programs repo to contribute.
 * Hacktoberfest 2020 special challenges for people new to opensource!
 */

#include <stdio.h>

void main (void) {

	int num = 0;

	//enter the array size
	scanf(" %d", &num);

	//assigning last and first indices to max and min respectively
	int max = num - 1, min = 0;

	//declaring an array
	int arr[num];

	//take the values from user
	for(int loop = 0; loop < num; loop++) {

		scanf(" %d", &arr[loop]);

	}

	//sort the array in ascending order
	for(int outer = 0; outer < num; outer++) {		//outer for outer loop

		for(int inner = 0; inner < num; inner++) {	//inner for inner loop

			if(arr[outer] < arr[inner]) {

				int temp = arr[outer];		//temporary variable used to swap the values

				arr[outer] = arr[inner];

				arr[inner] = temp;

			}

		}

	}

	printf("Sorted Array:\n");

	for(int loop = 0; loop < num; loop++) {

		printf("%d ", arr[loop]);

	}

	printf("\n");

	//MaxMin array declaration
	int arr1[num];

	//Storing the last number at 0th index, first number at 1st index and so on
	//We can apply this logic because the array is sorted above(in ascending order)

	for(int sort = 0; sort < num; sort++) {

		if(sort % 2 == 0) {			//max elements occupy even positions

			arr1[sort] = arr[max];

			max--;

		} else {				//min elements occupy the odd positions

			arr1[sort] = arr[min];

			min++;

		}

	}
	
	printf("MinMax Array:\n");

	for(int loop = 0; loop < num; loop++) {

		printf("%d ", arr1[loop]);

	}

	printf("\n");

}
