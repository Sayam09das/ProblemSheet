char* winningPlayer(int x, int y) {
    int moves = (x < (y / 4)) ? x : (y / 4);
    if (moves % 2 == 1){
        return "Alice";
    }
    else{
        return "Bob";
    }
}