using namespace std;

bool isValidSubsequence(vector<int> array, vector<int> sequence) {
  // Write your code here.
  bool flag = false;
  int array_pointer = 0;
  int sequence_pointer = 0;

  if(sequence.size()<=array.size()){

while(array_pointer<array.size() && sequence_pointer < sequence.size()){
  if(array[array_pointer] == sequence[sequence_pointer])
      sequence_pointer+=1;
  array_pointer+=1;

}
return sequence_pointer == sequence.size();
  
  

  }
  return false;
}
  