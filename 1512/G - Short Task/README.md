<h2><a href="https://codeforces.com/contest/1512/problem/G" target="_blank" rel="noopener noreferrer">1512G — Short Task</a></h2>

| | |
|---|---|
| **Difficulty** | 1700 |
| **Language** | C++17 (GCC 7-32) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1512G](https://codeforces.com/contest/1512/problem/G) |

## Topics
`brute force` `dp` `math` `number theory`

---

## Problem Statement

<div class="header" bis_skin_checked="1"><div class="title" bis_skin_checked="1">G. Short Task</div><div class="time-limit" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">time limit per test</div>2 seconds</div><div class="memory-limit" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">memory limit per test</div>512 megabytes</div><div class="input-file input-standard" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">input</div>standard input</div><div class="output-file output-standard" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">output</div>standard output</div></div><div bis_skin_checked="1"><p>Let us denote by $$$d(n)$$$ the sum of all divisors of the number $$$n$$$, i.e. $$$d(n) = \sum\limits_{k | n} k$$$.</p><p>For example, $$$d(1) = 1$$$, $$$d(4) = 1+2+4=7$$$, $$$d(6) = 1+2+3+6=12$$$.</p><p>For a given number $$$c$$$, find the minimum $$$n$$$ such that $$$d(n) = c$$$.</p></div><div class="input-specification" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Input</div><p>The first line contains one integer $$$t$$$ ($$$1 \le t \le 10^4$$$). Then $$$t$$$ test cases follow.</p><p>Each test case is characterized by one integer $$$c$$$ ($$$1 \le c \le 10^7$$$).</p></div><div class="output-specification" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Output</div><p>For each test case, output: </p><ul> <li> "<span class="tex-font-style-tt">-1</span>" if there is no such $$$n$$$ that $$$d(n) = c$$$; </li><li> $$$n$$$, otherwise. </li></ul></div><div class="sample-tests" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Example</div><div class="sample-test" bis_skin_checked="1"><div class="input" bis_skin_checked="1"><div class="title" bis_skin_checked="1">Input<div title="Copy" data-clipboard-target="#id0047063918637943614" id="id0007995955443240621" class="input-output-copier" bis_skin_checked="1">Copy</div></div><pre id="id0047063918637943614">12
1
2
3
4
5
6
7
8
9
10
39
691
</pre></div><div class="output" bis_skin_checked="1"><div class="title" bis_skin_checked="1">Output<div title="Copy" data-clipboard-target="#id002468307654943077" id="id0030983342779762457" class="input-output-copier" bis_skin_checked="1">Copy</div></div><pre id="id002468307654943077">1
-1
2
3
-1
5
4
7
-1
-1
18
-1
</pre></div></div></div>