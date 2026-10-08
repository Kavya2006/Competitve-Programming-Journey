<h2><a href="https://codeforces.com/contest/1277/problem/B" target="_blank" rel="noopener noreferrer">1277B — Make Them Odd</a></h2>

| | |
|---|---|
| **Difficulty** | 1200 |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1277B](https://codeforces.com/contest/1277/problem/B) |

## Topics
`greedy` `number theory`

---

## Problem Statement

<div class="header" bis_skin_checked="1"><div class="title" bis_skin_checked="1">B. Make Them Odd</div><div class="time-limit" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">time limit per test</div>3 seconds</div><div class="memory-limit" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">memory limit per test</div>256 megabytes</div><div class="input-file input-standard" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">input</div>standard input</div><div class="output-file output-standard" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">output</div>standard output</div></div><div bis_skin_checked="1"><p>There are $$$n$$$ positive integers $$$a_1, a_2, \dots, a_n$$$. For the one move you can choose any even value $$$c$$$ and divide by two <span class="tex-font-style-bf">all</span> elements that equal $$$c$$$.</p><p>For example, if $$$a=[6,8,12,6,3,12]$$$ and you choose $$$c=6$$$, and $$$a$$$ is transformed into $$$a=[3,8,12,3,3,12]$$$ after the move.</p><p>You need to find the minimal number of moves for transforming $$$a$$$ to an array of only odd integers (each element shouldn't be divisible by $$$2$$$).</p></div><div class="input-specification" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Input</div><p>The first line of the input contains one integer $$$t$$$ ($$$1 \le t \le 10^4$$$) — the number of test cases in the input. Then $$$t$$$ test cases follow.</p><p>The first line of a test case contains $$$n$$$ ($$$1 \le n \le 2\cdot10^5$$$) — the number of integers in the sequence $$$a$$$. The second line contains positive integers $$$a_1, a_2, \dots, a_n$$$ ($$$1 \le a_i \le 10^9$$$).</p><p>The sum of $$$n$$$ for all test cases in the input doesn't exceed $$$2\cdot10^5$$$.</p></div><div class="output-specification" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Output</div><p>For $$$t$$$ test cases print the answers in the order of test cases in the input. The answer for the test case is the minimal number of moves needed to make <span class="tex-font-style-bf">all</span> numbers in the test case odd (i.e. not divisible by $$$2$$$).</p></div><div class="sample-tests" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Example</div><div class="sample-test" bis_skin_checked="1"><div class="input" bis_skin_checked="1"><div class="title" bis_skin_checked="1">Input<div title="Copy" data-clipboard-target="#id007450233910783349" id="id0039460082404083296" class="input-output-copier" bis_skin_checked="1">Copy</div></div><pre id="id007450233910783349">4
6
40 6 40 3 20 1
1
1024
4
2 4 8 16
3
3 1 7
</pre></div><div class="output" bis_skin_checked="1"><div class="title" bis_skin_checked="1">Output<div title="Copy" data-clipboard-target="#id004399734256013482" id="id0017670566655885722" class="input-output-copier" bis_skin_checked="1">Copy</div></div><pre id="id004399734256013482">4
10
4
0
</pre></div></div></div><div class="note" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Note</div><p>In the first test case of the example, the optimal sequence of moves can be as follows:</p><ul> <li> before making moves $$$a=[40, 6, 40, 3, 20, 1]$$$; </li><li> choose $$$c=6$$$; </li><li> now $$$a=[40, 3, 40, 3, 20, 1]$$$; </li><li> choose $$$c=40$$$; </li><li> now $$$a=[20, 3, 20, 3, 20, 1]$$$; </li><li> choose $$$c=20$$$; </li><li> now $$$a=[10, 3, 10, 3, 10, 1]$$$; </li><li> choose $$$c=10$$$; </li><li> now $$$a=[5, 3, 5, 3, 5, 1]$$$ — all numbers are odd. </li></ul><p>Thus, all numbers became odd after $$$4$$$ moves. In $$$3$$$ or fewer moves, you cannot make them all odd.</p></div>