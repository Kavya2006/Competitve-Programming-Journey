<h2><a href="https://codeforces.com/contest/1613/problem/C" target="_blank" rel="noopener noreferrer">1613C — Poisoned Dagger</a></h2>

| | |
|---|---|
| **Difficulty** | 1200 |
| **Language** | C++17 (GCC 7-32) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1613C](https://codeforces.com/contest/1613/problem/C) |

## Topics
`binary search`

---

## Problem Statement

<div class="header" bis_skin_checked="1"><div class="title" bis_skin_checked="1">C. Poisoned Dagger</div><div class="time-limit" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">time limit per test</div>2 seconds</div><div class="memory-limit" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">memory limit per test</div>256 megabytes</div><div class="input-file input-standard" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">input</div>standard input</div><div class="output-file output-standard" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">output</div>standard output</div></div><div bis_skin_checked="1"><p>Monocarp is playing yet another computer game. In this game, his character has to kill a dragon. The battle with the dragon lasts $$$100^{500}$$$ seconds, during which Monocarp attacks the dragon with a poisoned dagger. The $$$i$$$-th attack is performed at the beginning of the $$$a_i$$$-th second from the battle start. The dagger itself does not deal damage, but it applies a poison effect on the dragon, which deals $$$1$$$ damage during each of the next $$$k$$$ seconds (starting with the same second when the dragon was stabbed by the dagger). However, if the dragon has already been poisoned, then the dagger updates the poison effect (i.e. cancels the current poison effect and applies a new one).</p><p>For example, suppose $$$k = 4$$$, and Monocarp stabs the dragon during the seconds $$$2$$$, $$$4$$$ and $$$10$$$. Then the poison effect is applied at the start of the $$$2$$$-nd second and deals $$$1$$$ damage during the $$$2$$$-nd and $$$3$$$-rd seconds; then, at the beginning of the $$$4$$$-th second, the poison effect is reapplied, so it deals exactly $$$1$$$ damage during the seconds $$$4$$$, $$$5$$$, $$$6$$$ and $$$7$$$; then, during the $$$10$$$-th second, the poison effect is applied again, and it deals $$$1$$$ damage during the seconds $$$10$$$, $$$11$$$, $$$12$$$ and $$$13$$$. In total, the dragon receives $$$10$$$ damage.</p><p>Monocarp knows that the dragon has $$$h$$$ hit points, and if he deals at least $$$h$$$ damage to the dragon during the battle — he slays the dragon. Monocarp has not decided on the strength of the poison he will use during the battle, so he wants to find the minimum possible value of $$$k$$$ (the number of seconds the poison effect lasts) that is enough to deal at least $$$h$$$ damage to the dragon.</p></div><div class="input-specification" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Input</div><p>The first line contains a single integer $$$t$$$ ($$$1 \le t \le 1000$$$) — the number of test cases.</p><p>The first line of the test case contains two integers $$$n$$$ and $$$h$$$ ($$$1 \le n \le 100; 1 \le h \le 10^{18}$$$) — the number of Monocarp's attacks and the amount of damage that needs to be dealt.</p><p>The second line contains $$$n$$$ integers $$$a_1$$$, $$$a_2$$$, ..., $$$a_n$$$ ($$$1 \le a_i \le 10^9; a_i  \lt  a_{i + 1}$$$), where $$$a_i$$$ is the second when the $$$i$$$-th attack is performed.</p></div><div class="output-specification" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Output</div><p>For each test case, print a single integer — the minimum value of the parameter $$$k$$$, such that Monocarp will cause at least $$$h$$$ damage to the dragon.</p></div><div class="sample-tests" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Example</div><div class="sample-test" bis_skin_checked="1"><div class="input" bis_skin_checked="1"><div class="title" bis_skin_checked="1">Input<div title="Copy" data-clipboard-target="#id003460116512817224" id="id0027032115943676294" class="input-output-copier" bis_skin_checked="1">Copy</div></div><pre id="id003460116512817224">4
2 5
1 5
3 10
2 4 10
5 3
1 2 4 5 7
4 1000
3 25 64 1337
</pre></div><div class="output" bis_skin_checked="1"><div class="title" bis_skin_checked="1">Output<div title="Copy" data-clipboard-target="#id0040509577675516406" id="id003989336738205769" class="input-output-copier" bis_skin_checked="1">Copy</div></div><pre id="id0040509577675516406">3
4
1
470
</pre></div></div></div><div class="note" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Note</div><p>In the first example, for $$$k=3$$$, damage is dealt in seconds $$$[1, 2, 3, 5, 6, 7]$$$.</p><p>In the second example, for $$$k=4$$$, damage is dealt in seconds $$$[2, 3, 4, 5, 6, 7, 10, 11, 12, 13]$$$.</p><p>In the third example, for $$$k=1$$$, damage is dealt in seconds $$$[1, 2, 4, 5, 7]$$$.</p></div>