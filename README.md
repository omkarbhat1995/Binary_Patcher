# Binary Patcher

## Description:
To transplant a patch (binary) from a different binary which has the same function and the same vulnerability.
Finally we should be able to get a patched binary which works similar to the one before except for the patch part.
### Assumptions:
1) We have 3 binaries:

-A program with 2 binaries one before and one after the patch. 

-A different program with same vulneararbility in the same function.

2) Considering that the binary are not stripped and not optimised so that we can get function_names to know which function we have to patch.
 
3) Using G++ compiler.(due to some familiarity)

### Files

Mergesort_flaw.cpp: The file used to get unpatched version of Binary.<br />
Mergesort_flaw.out: Unpatched Binary.<br />
Mergesort_correct.cpp: The file used to get a patched version of Binary.<br />
Mergesort_correct.out: Patched Binary.<br />
Quicksort_flawed.cpp: The file used to get unpatched Binary to be patched; has the same problem as mergesort_flaw.<br />
Quciksort_flawed.out: Binary to be pathced.<br />



### Authors:
Omkar Bhat<br />
Jack Verrier<br />
Zoya Yeprem<br />
