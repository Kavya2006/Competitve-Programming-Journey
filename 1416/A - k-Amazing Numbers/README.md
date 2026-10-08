<h2><a href="https://codeforces.com/contest/1416/problem/A" target="_blank" rel="noopener noreferrer">1416A — k-Amazing Numbers</a></h2>

| | |
|---|---|
| **Difficulty** | 1500 |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1416A](https://codeforces.com/contest/1416/problem/A) |

## Topics
`binary search` `data structures` `implementation` `two pointers`

---

## Problem Statement

<div class="header" bis_skin_checked="1"><div class="title" bis_skin_checked="1">A. k-Amazing Numbers</div><div class="time-limit" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">time limit per test</div>1 second</div><div class="memory-limit" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">memory limit per test</div>256 megabytes</div><div class="input-file input-standard" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">input</div>standard input</div><div class="output-file output-standard" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">output</div>standard output</div></div><div bis_skin_checked="1"><p>You are given an array $$$a$$$ consisting of $$$n$$$ integers numbered from $$$1$$$ to $$$n$$$.</p><p>Let's define the $$$k$$$-amazing number of the array as the minimum number that occurs in all of the subsegments of the array having length $$$k$$$ (recall that a subsegment of $$$a$$$ of length $$$k$$$ is a contiguous part of $$$a$$$ containing exactly $$$k$$$ elements). If there is no integer occuring in all subsegments of length $$$k$$$ for some value of $$$k$$$, then the $$$k$$$-amazing number is $$$-1$$$.</p><p>For each $$$k$$$ from $$$1$$$ to $$$n$$$ calculate the $$$k$$$-amazing number of the array $$$a$$$.</p></div><div class="input-specification" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Input</div><p>The first line contains one integer $$$t$$$ ($$$1 \le t \le 1000$$$) — the number of test cases. Then $$$t$$$ test cases follow.</p><p>The first line of each test case contains one integer $$$n$$$ ($$$1 \le n \le 3 \cdot 10^5$$$) — the number of elements in the array. The second line contains $$$n$$$ integers $$$a_1, a_2, \dots, a_n$$$ ($$$1 \le a_i \le n$$$) — the elements of the array. </p><p>It is guaranteed that the sum of $$$n$$$ over all test cases does not exceed $$$3 \cdot 10^5$$$.</p></div><div class="output-specification" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Output</div><p>For each test case print $$$n$$$ integers, where the $$$i$$$-th integer is equal to the $$$i$$$-amazing number of the array.</p></div><div class="sample-tests" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Example</div><div class="sample-test" bis_skin_checked="1"><div class="input" bis_skin_checked="1"><div class="title" bis_skin_checked="1">Input<div title="Copy" data-clipboard-target="#id0006719827365998454" id="id008753161363318587" class="input-output-copier" bis_skin_checked="1">Copy</div></div><pre id="id0006719827365998454">3
5
1 2 3 4 5
5
4 4 4 4 2
6
1 3 1 5 3 1
</pre></div><div class="output" bis_skin_checked="1"><div class="title" bis_skin_checked="1">Output<div title="Copy" data-clipboard-target="#id008322168430868884" id="id008879054469947943" class="input-output-copier" bis_skin_checked="1">Copy</div></div><pre id="id008322168430868884">-1 -1 3 2 1 
-1 4 4 4 2 
-1 -1 1 1 1 1 
</pre></div></div></div>