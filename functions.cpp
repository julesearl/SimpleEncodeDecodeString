String key = "AnyLettersOrNumbers134OrLength"; //Only tested with letters and numbers

String encodeText(String key, String text){ //encode function
  int keyLength = key.length(); //length of key
  int textLength = text.length(); //length of text
  float reps = textLength / keyLength; //not used - number of iterations of key to encode text
  
  char encodedText[textLength] = {0}; //char to store encoded characters
  int kC = 0; //key character position
  for (int i = 0; i < textLength; i++) { //iterate through text and encode using key
      int posCheck = keyLength - kC; //check position in key 
      if(posCheck == 0){ //if the key position is at the end of the key reset the position to the beginning
        kC = 0; //reset key position
      }
      encodedText[i] = char((int)text.charAt(i) + (int)key.charAt(kC)); //return the numerical character value for the character at position i and add it to the numerical character value of the key at position kC
      ++kC; increment kC
  }

  String result = String(encodedText).c_str(); //convert encoded char array back to string
  return result; //return the result - encoded text using the key
}

String decodeText(String key, String text){ //decode function
  int keyLength = key.length();
  int textLength = text.length();
  float reps = textLength / keyLength; //not used - number of iterations of key to encode text
  
  char decodedText[textLength] = {0}; //char to store decoded characters
  int kC = 0; //key character position
  for (int i = 0; i < textLength; i++) { //iterate through text and decode using key
      int posCheck = keyLength - kC; //check position in key
      if(posCheck == 0){ //if the key position is at the end of the key reset the position to the beginning
        kC = 0; //reset key position
      }
      int charCheck = (int)text.charAt(i); //check if the character at position i is null
      if(charCheck == 0) { //if it is null return null as the value of this character
        decodedText[i] = NULL;
      }
      else{ //decode the character at position i
        decodedText[i] = char((int)text.charAt(i) - (int)key.charAt(kC)); //return the numerical character value for the character at position i and subtract it from the numerical character value of the key at position kC
      } 
      ++kC; increment kC
  }
  String result = String(decodedText).c_str(); //convert the decoded char array back to string
  return result; //return the result - decoded text using the shared key
}
