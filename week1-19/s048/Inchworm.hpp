/* JOINT WORK
Jason de Groot and Tom Galindo
worked on this problem together in practical session 01
*/

//class def
class Inchworm
{
public:
	int lunchtime(int,int,int);
};

int Inchworm::lunchtime(int branch,int rest,int leaf)
{
	//return total leaves eaten for a given branch length, leaf/rest spacing
	//first leaf is at position 0 and is always eaten

	/*
	CONSTRAINTS
	any negative parameter is invalid
	branch is between 1 and 1000000 (one million), inclusive
	rest is between 1 and 1000, inclusive
	leaf is between 1 and 1000, inclusive
	*/

	//invalid parameter trap
	if (branch 	< 1 || branch 	> 1000000) 	return -1;
	if (rest 	< 1 || rest 	> 1000) 	return -1;
	if (leaf 	< 1 || leaf 	> 1000) 	return -1;

	//intersection distance will be lowest common multiple of leaf and rest distances
	int intersection = rest;

	//LCM loop
	while (intersection % leaf != 0)
	{
		intersection += rest;
	}

	//maximum number of leaves eaten on a single pass of the branch
	// + 1 is the leaf eaten at origin
	return (branch / intersection) + 1;
}