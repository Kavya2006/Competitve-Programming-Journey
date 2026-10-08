<h2><a href="https://codeforces.com/contest/1474/problem/C" target="_blank" rel="noopener noreferrer">1474C — Array Destruction</a></h2>

| | |
|---|---|
| **Difficulty** | 1700 |
| **Language** | C++17 (GCC 7-32) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1474C](https://codeforces.com/contest/1474/problem/C) |

## Topics
`brute force` `constructive algorithms` `data structures` `greedy` `implementation` `sortings`

---

## Problem Statement

<div class="header" bis_skin_checked="1"><div class="title" bis_skin_checked="1">C. Array Destruction</div><div class="time-limit" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">time limit per test</div>1 second</div><div class="memory-limit" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">memory limit per test</div>256 megabytes</div><div class="input-file input-standard" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">input</div>standard input</div><div class="output-file output-standard" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">output</div>standard output</div></div><div bis_skin_checked="1"><p>You found a useless array $$$a$$$ of $$$2n$$$ positive integers. You have realized that you actually don't need this array, so you decided to throw out all elements of $$$a$$$.</p><p>It could have been an easy task, but it turned out that you should follow some rules: </p><ol> <li> In the beginning, you select any positive integer $$$x$$$.</li><li> Then you do the following operation $$$n$$$ times: <ul> <li> select two elements of array with sum equals $$$x$$$; </li><li> remove them from $$$a$$$ and replace $$$x$$$ with maximum of that two numbers. </li></ul> </li></ol><p>For example, if initially $$$a = [3, 5, 1, 2]$$$, you can select $$$x = 6$$$. Then you can select the second and the third elements of $$$a$$$ with sum $$$5 + 1 = 6$$$ and throw them out. After this operation, $$$x$$$ equals $$$5$$$ and there are two elements in array: $$$3$$$ and $$$2$$$. You can throw them out on the next operation.</p><p>Note, that you choose $$$x$$$ before the start and can't change it as you want between the operations.</p><p>Determine how should you behave to throw out all elements of $$$a$$$.</p></div><div class="input-specification" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Input</div><p>The first line contains a single integer $$$t$$$ ($$$1 \leq t \leq 1000$$$) — the number of test cases.</p><p>The first line of each test case contains the single integer $$$n$$$ ($$$1 \leq n \leq 1000$$$).</p><p>The second line of each test case contains $$$2n$$$ integers $$$a_1, a_2, \dots, a_{2n}$$$ ($$$1 \leq a_i \leq 10^6$$$) — the initial array $$$a$$$.</p><p>It is guaranteed that the total sum of $$$n$$$ over all test cases doesn't exceed $$$1000$$$.</p></div><div class="output-specification" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Output</div><p>For each test case in the first line print <span class="tex-font-style-tt">YES</span> if it is possible to throw out all elements of the array and <span class="tex-font-style-tt">NO</span> otherwise.</p><p>If it is possible to throw out all elements, print the initial value of $$$x$$$ you've chosen. Print description of $$$n$$$ operations next. For each operation, print the pair of integers you remove.</p></div><div class="sample-tests" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Example</div><div class="sample-test" bis_skin_checked="1"><div class="input" bis_skin_checked="1"><div class="title" bis_skin_checked="1">Input<div title="Copy" data-clipboard-target="#id004891288780974711" id="id006329236683311031" class="input-output-copier" bis_skin_checked="1">Copy</div></div><pre id="id004891288780974711">4
2
3 5 1 2
3
1 1 8 8 64 64
2
1 1 2 4
5
1 2 3 4 5 6 7 14 3 11
</pre></div><div class="output" bis_skin_checked="1"><div class="title" bis_skin_checked="1">Output<div title="Copy" data-clipboard-target="#id005054067561079781" id="id003614377980195794" class="input-output-copier" bis_skin_checked="1">Copy</div></div><pre id="id005054067561079781">YES
6
1 5
2 3
NO
NO
YES
21
14 7
3 11
5 6
2 4
3 1</pre></div></div></div><div class="note" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Note</div><p>The first test case was described in the statement.</p><p>In the second and third test cases, we can show that it is impossible to throw out all elements of array $$$a$$$.</p></div>