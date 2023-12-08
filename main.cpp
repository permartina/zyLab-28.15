#include <iostream>
using namespace  std;



// PlaylistNode.cpp FILE

#include "PlaylistNode.h"  
using namespace std;
PlaylistNode::PlaylistNode() : uniqueID("none"), songName("none"), artistName("none"), songLength(0), nextNodePtr(nullptr) {} 

PlaylistNode::PlaylistNode(string id, string name, string artist, int length) 

    : uniqueID(id), songName(name), artistName(artist), songLength(length), nextNodePtr(nullptr) {} 

  
