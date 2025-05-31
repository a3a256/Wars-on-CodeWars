std::string getIssuer(const std::string &number)
{
  if(number.size() == 15){
    if(number[0] == '3' && (number[1] == '4' || number[1] == '7')){
      return "AMEX";
    }
    return "Unknown";
  }
  if(number.size() == 16){
    if(number[0] == '6' && number[1] == '0' && number[2] == '1' && number[3] == '1'){
      return "Discover";
    }
    if(number[0] == '5' && (number[1] == '1' || number[1] == '2' || number[1] == '3' || number[1] == '4' || number[1] == '5')){
      return "Mastercard";
    }
    if(number[0] == '4'){
      return "VISA";
    }
  }
  if(number.size() == 13){
    if(number[0] == '4'){
      return "VISA";
    }
    return "Unknown";
  }
    return "Unknown";
}
