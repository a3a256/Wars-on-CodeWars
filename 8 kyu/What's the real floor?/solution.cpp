int getRealFloor(int f) {
  if(f <= 1){if(f<0){return f;}return 0;}
  if(f >= 14){return f-2;}
  
  return f-1;
}
