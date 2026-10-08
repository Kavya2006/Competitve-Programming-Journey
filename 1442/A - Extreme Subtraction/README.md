<h2><a href="https://codeforces.com/contest/1442/problem/A" target="_blank" rel="noopener noreferrer">1442A — Extreme Subtraction</a></h2>

| | |
|---|---|
| **Difficulty** | 1800 |
| **Language** | C++17 (GCC 7-32) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1442A](https://codeforces.com/contest/1442/problem/A) |

## Topics
`constructive algorithms` `dp` `greedy`

---

## Problem Statement

<div class="header" bis_skin_checked="1"><div class="title" bis_skin_checked="1">A. Extreme Subtraction</div><div class="time-limit" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">time limit per test</div>2 seconds</div><div class="memory-limit" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">memory limit per test</div>256 megabytes</div><div class="input-file input-standard" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">input</div>standard input</div><div class="output-file output-standard" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">output</div>standard output</div></div><div bis_skin_checked="1"><p>You are given an array $$$a$$$ of $$$n$$$ positive integers.</p><p>You can use the following operation as many times as you like: select any integer $$$1 \le k \le n$$$ and do one of two things: </p><ul> <li> decrement by one $$$k$$$ of the first elements of the array. </li><li> decrement by one $$$k$$$ of the last elements of the array. </li></ul><p>For example, if $$$n=5$$$ and $$$a=[3,2,2,1,4]$$$, then you can apply one of the following operations to it (not all possible options are listed below): </p><ul> <li> decrement from the first two elements of the array. After this operation $$$a=[2, 1, 2, 1, 4]$$$; </li><li> decrement from the last three elements of the array. After this operation $$$a=[3, 2, 1, 0, 3]$$$; </li><li> decrement from the first five elements of the array. After this operation $$$a=[2, 1, 1, 0, 3]$$$; </li></ul><p>Determine if it is possible to make all the elements of the array equal to zero by applying a certain number of operations.</p></div><div class="input-specification" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Input</div><p>The first line contains one positive integer $$$t$$$ ($$$1 \le t \le 30000$$$) — the number of test cases. Then $$$t$$$ test cases follow.</p><p>Each test case begins with a line containing one integer $$$n$$$ ($$$1 \le n \le 30000$$$) — the number of elements in the array.</p><p>The second line of each test case contains $$$n$$$ integers $$$a_1 \ldots a_n$$$ ($$$1 \le a_i \le 10^6$$$).</p><p>The sum of $$$n$$$ over all test cases does not exceed $$$30000$$$.</p></div><div class="output-specification" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Output</div><p>For each test case, output on a separate line: </p><ul> <li> <span class="tex-font-style-tt">YES</span>, if it is possible to make all elements of the array equal to zero by applying a certain number of operations. </li><li> <span class="tex-font-style-tt">NO</span>, otherwise. </li></ul><p>The letters in the words <span class="tex-font-style-tt">YES</span> and <span class="tex-font-style-tt">NO</span> can be outputed in any case.</p></div><div class="sample-tests" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Example</div><div class="sample-test" bis_skin_checked="1"><div class="input" bis_skin_checked="1"><div class="title" bis_skin_checked="1">Input<div title="Copy" data-clipboard-target="#id00203039694730472" id="id002390084373908794" class="input-output-copier" bis_skin_checked="1">Copy</div></div><pre id="id00203039694730472">4
3
1 2 1
5
11 7 9 6 8
5
1 3 1 3 1
4
5 2 1 10
</pre></div><div class="output" bis_skin_checked="1"><div class="title" bis_skin_checked="1">Output<div title="Copy" data-clipboard-target="#id0013087952882614862" id="id009815994106639688" class="input-output-copier" bis_skin_checked="1">Copy</div></div><pre id="id0013087952882614862">YES
YES
NO
YES
</pre></div></div></div>