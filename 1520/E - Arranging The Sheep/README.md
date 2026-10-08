<h2><a href="https://codeforces.com/contest/1520/problem/E" target="_blank" rel="noopener noreferrer">1520E — Arranging The Sheep</a></h2>

| | |
|---|---|
| **Difficulty** | 1400 |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1520E](https://codeforces.com/contest/1520/problem/E) |

## Topics
`greedy` `math`

---

## Problem Statement

<div class="header" bis_skin_checked="1"><div class="title" bis_skin_checked="1">E. Arranging The Sheep</div><div class="time-limit" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">time limit per test</div>2 seconds</div><div class="memory-limit" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">memory limit per test</div>256 megabytes</div><div class="input-file input-standard" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">input</div>standard input</div><div class="output-file output-standard" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">output</div>standard output</div></div><div bis_skin_checked="1"><p>You are playing the game "Arranging The Sheep". The goal of this game is to make the sheep line up. The level in the game is described by a string of length $$$n$$$, consisting of the characters '<span class="tex-font-style-tt">.</span>' (empty space) and '<span class="tex-font-style-tt">*</span>' (sheep). In one move, you can move any sheep one square to the left or one square to the right, if the corresponding square <span class="tex-font-style-bf">exists and is empty</span>. The game ends as soon as the sheep are lined up, that is, there should be no empty cells between any sheep.</p><p>For example, if $$$n=6$$$ and the level is described by the string "<span class="tex-font-style-tt">**.*..</span>", then the following game scenario is possible: </p><ul> <li> the sheep at the $$$4$$$ position moves to the right, the state of the level: "<span class="tex-font-style-tt">**..*.</span>"; </li><li> the sheep at the $$$2$$$ position moves to the right, the state of the level: "<span class="tex-font-style-tt">*.*.*.</span>"; </li><li> the sheep at the $$$1$$$ position moves to the right, the state of the level: "<span class="tex-font-style-tt">.**.*.</span>"; </li><li> the sheep at the $$$3$$$ position moves to the right, the state of the level: "<span class="tex-font-style-tt">.*.**.</span>"; </li><li> the sheep at the $$$2$$$ position moves to the right, the state of the level: "<span class="tex-font-style-tt">..***.</span>"; </li><li> the sheep are lined up and the game ends. </li></ul><p>For a given level, determine the minimum number of moves you need to make to complete the level.</p></div><div class="input-specification" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Input</div><p>The first line contains one integer $$$t$$$ ($$$1 \le t \le 10^4$$$). Then $$$t$$$ test cases follow.</p><p>The first line of each test case contains one integer $$$n$$$ ($$$1 \le n \le 10^6$$$).</p><p>The second line of each test case contains a string of length $$$n$$$, consisting of the characters '<span class="tex-font-style-tt">.</span>' (empty space) and '<span class="tex-font-style-tt">*</span>' (sheep) — the description of the level.</p><p>It is guaranteed that the sum of $$$n$$$ over all test cases does not exceed $$$10^6$$$.</p></div><div class="output-specification" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Output</div><p>For each test case output the minimum number of moves you need to make to complete the level.</p></div><div class="sample-tests" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Example</div><div class="sample-test" bis_skin_checked="1"><div class="input" bis_skin_checked="1"><div class="title" bis_skin_checked="1">Input<div title="Copy" data-clipboard-target="#id006025710531598094" id="id009477867460824411" class="input-output-copier" bis_skin_checked="1">Copy</div></div><pre id="id006025710531598094">5
6
**.*..
5
*****
3
.*.
3
...
10
*.*...*.**
</pre></div><div class="output" bis_skin_checked="1"><div class="title" bis_skin_checked="1">Output<div title="Copy" data-clipboard-target="#id006082992480775216" id="id0021130918782684538" class="input-output-copier" bis_skin_checked="1">Copy</div></div><pre id="id006082992480775216">1
0
0
0
9
</pre></div></div></div>