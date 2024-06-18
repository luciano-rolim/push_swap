# push_swap
The push_swap project at 42 school involves implementing an algorithm to sort a stack of numbers using the minimum number of movements. For more information, check the subject file inside the External_files folder.

To accomplish this, I used an adaptation of the so-called "Turkish algorithm." This [Medium article](url) was especially useful for providing ideas on how to implement the algorithm. Essentially, the idea is to move items from stack A to stack B using the minimum number of movements each time, and then move them back to stack A.

When codingg, pay special attention to opportunities to use rr and rrr instead of solely ra/rb/rra/rrb. This is one of the "secret ingredients" to reduce your movements.

Other important tools to do this project were:

- [Push Swap Visualizer](url): a fantastic tool provided by [o-reo](https://github.com/o-reo) that allows an easy visualization of how your algorithm is working.

- [Push_swap_tester](https://github.com/julien-ctx/push-swap-tester): this test machine made by [julien-ctx](https://github.com/julien-ctx) was especially useful for detecting some silly mistakes in my code. It also helped me test how many movements it takes to sort 5 numbers in all 120 possible combinations. Since no combination exceeded 10 movements, it was unnecessary for me to implement a specific function solely to order 5 numbers (as I did for stacks of size 2, 3 and 4).

Note: The "External_files" folder contains useful files that were not submitted to the 42 repository, including the subject, the checker_linux, and the print_list.c file. Print_list.c contains a simple function (that can be inserted into your main file) that runs through stacks A and B and prints their parameters for each node (in my case, prev, next, index and the number itself). This is especially useful at the beginning of the project to check if your movement functions are not inadvertently changing the pointers or the indexes in the wrong way. Remember to remove or comment the print_lists before submmiting your final push_swap project.
