<h2><a href="https://codeforces.com/contest/1335/problem/C" target="_blank" rel="noopener noreferrer">1335C — Two Teams Composing</a></h2>

| | |
|---|---|
| **Difficulty** | 1100 |
| **Language** | C++17 (GCC 7-32) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1335C](https://codeforces.com/contest/1335/problem/C) |

## Topics
`binary search` `greedy` `implementation` `sortings`

---

## Problem Statement

<div class="header" bis_skin_checked="1"><div class="title" bis_skin_checked="1">C. Two Teams Composing</div><div class="time-limit" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">time limit per test</div>2 seconds</div><div class="memory-limit" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">memory limit per test</div>256 megabytes</div><div class="input-file input-standard" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">input</div>standard input</div><div class="output-file output-standard" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">output</div>standard output</div></div><div bis_skin_checked="1"><p>You have $$$n$$$ students under your control and you have to compose <span class="tex-font-style-bf">exactly two teams</span> consisting of some subset of your students. Each student had his own skill, the $$$i$$$-th student skill is denoted by an integer $$$a_i$$$ (different students can have the same skills).</p><p>So, about the teams. Firstly, these two teams should have the same size. Two more constraints:</p><ul> <li> The first team should consist of students with <span class="tex-font-style-bf">distinct</span> skills (i.e. all skills in the first team are unique). </li><li> The second team should consist of students with <span class="tex-font-style-bf">the same</span> skills (i.e. all skills in the second team are equal). </li></ul><p>Note that it is permissible that some student of the first team has the same skill as a student of the second team.</p><p>Consider some examples (skills are given):</p><ul> <li> $$$[1, 2, 3]$$$, $$$[4, 4]$$$ is not a good pair of teams because sizes should be the same; </li><li> $$$[1, 1, 2]$$$, $$$[3, 3, 3]$$$ is not a good pair of teams because the first team should not contain students with the same skills; </li><li> $$$[1, 2, 3]$$$, $$$[3, 4, 4]$$$ is not a good pair of teams because the second team should contain students with the same skills; </li><li> $$$[1, 2, 3]$$$, $$$[3, 3, 3]$$$ is a good pair of teams; </li><li> $$$[5]$$$, $$$[6]$$$ is a good pair of teams. </li></ul><p>Your task is to find the maximum possible size $$$x$$$ for which it is possible to compose a valid pair of teams, where each team size is $$$x$$$ (skills in the first team needed to be unique, skills in the second team should be the same between them). A student cannot be part of more than one team.</p><p>You have to answer $$$t$$$ independent test cases.</p></div><div class="input-specification" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Input</div><p>The first line of the input contains one integer $$$t$$$ ($$$1 \le t \le 10^4$$$) — the number of test cases. Then $$$t$$$ test cases follow.</p><p>The first line of the test case contains one integer $$$n$$$ ($$$1 \le n \le 2 \cdot 10^5$$$) — the number of students. The second line of the test case contains $$$n$$$ integers $$$a_1, a_2, \dots, a_n$$$ ($$$1 \le a_i \le n$$$), where $$$a_i$$$ is the skill of the $$$i$$$-th student. Different students can have the same skills.</p><p>It is guaranteed that the sum of $$$n$$$ over all test cases does not exceed $$$2 \cdot 10^5$$$ ($$$\sum n \le 2 \cdot 10^5$$$).</p></div><div class="output-specification" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Output</div><p>For each test case, print the answer — the maximum possible size $$$x$$$ for which it is possible to compose a valid pair of teams, where each team size is $$$x$$$.</p></div><div class="sample-tests" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Example</div><div class="sample-test" bis_skin_checked="1"><div class="input" bis_skin_checked="1"><div class="title" bis_skin_checked="1">Input<div title="Copy" data-clipboard-target="#id006438888838496718" id="id000923968374198817" class="input-output-copier" bis_skin_checked="1">Copy</div></div><pre id="id006438888838496718">4
7
4 2 4 1 4 3 4
5
2 1 5 4 3
1
1
4
1 1 1 3
</pre></div><div class="output" bis_skin_checked="1"><div class="title" bis_skin_checked="1">Output<div title="Copy" data-clipboard-target="#id003810919296294577" id="id00013329362213078344" class="input-output-copier" bis_skin_checked="1">Copy</div></div><pre id="id003810919296294577">3
1
0
2
</pre></div></div></div><div class="note" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Note</div><p>In the first test case of the example, it is possible to construct two teams of size $$$3$$$: the first team is $$$[1, 2, 4]$$$ and the second team is $$$[4, 4, 4]$$$. Note, that there are some other ways to construct two valid teams of size $$$3$$$.</p></div>