class Solution {
    public void sortColors(int[] arr) {
        int low = 0;
        int high = arr.length - 1;
        int mid = 0;
        
        while(mid <= high){
            switch(arr[mid]){
                    case 0 -> {
                        swap(arr, low, mid);
                        low++;
                        mid++;
                    }
                    case 1 -> {
                        mid++;
                    }
                    case 2 -> {
                        swap(arr, mid, high);
                        high--;
                    }
            }
        }
    }
    
    public void swap(int[] arr, int first, int second){
        int temp = arr[first];
        arr[first] = arr[second];
        arr[second] = temp;
    }
}