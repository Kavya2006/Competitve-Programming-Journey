<h2><a href="https://codeforces.com/contest/1430/problem/A" target="_blank" rel="noopener noreferrer">1430A — Number of Apartments</a></h2>

| | |
|---|---|
| **Difficulty** | 900 |
| **Language** | C++17 (GCC 7-32) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1430A](https://codeforces.com/contest/1430/problem/A) |

## Topics
`brute force` `constructive algorithms` `math`

---

## Problem Statement

<div class="header" bis_skin_checked="1"><div class="title" bis_skin_checked="1">A. Number of Apartments</div><div class="time-limit" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">time limit per test</div>1 second</div><div class="memory-limit" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">memory limit per test</div>256 megabytes</div><div class="input-file input-standard" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">input</div>standard input</div><div class="output-file output-standard" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">output</div>standard output</div></div><div bis_skin_checked="1"><p>Recently a new building with a new layout was constructed in Monocarp's hometown. According to this new layout, the building consists of three types of apartments: three-room, five-room, and seven-room apartments. It's also known that each room of each apartment has exactly one window. In other words, a three-room apartment has three windows, a five-room — five windows, and a seven-room — seven windows.</p><p>Monocarp went around the building and counted $$$n$$$ windows. Now he is wondering, how many apartments of each type the building may have.</p><p>Unfortunately, Monocarp only recently has learned to count, so he is asking you to help him to calculate the possible quantities of three-room, five-room, and seven-room apartments in the building that has $$$n$$$ windows. If there are multiple answers, you can print any of them.</p><p>Here are some examples:</p><ul> <li> if Monocarp has counted $$$30$$$ windows, there could have been $$$2$$$ three-room apartments, $$$2$$$ five-room apartments and $$$2$$$ seven-room apartments, since $$$2 \cdot 3 + 2 \cdot 5 + 2 \cdot 7 = 30$$$; </li><li> if Monocarp has counted $$$67$$$ windows, there could have been $$$7$$$ three-room apartments, $$$5$$$ five-room apartments and $$$3$$$ seven-room apartments, since $$$7 \cdot 3 + 5 \cdot 5 + 3 \cdot 7 = 67$$$; </li><li> if Monocarp has counted $$$4$$$ windows, he should have mistaken since no building with the aforementioned layout can have $$$4$$$ windows. </li></ul></div><div class="input-specification" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Input</div><p>Th first line contains one integer $$$t$$$ ($$$1 \le t \le 1000$$$) — the number of test cases.</p><p>The only line of each test case contains one integer $$$n$$$ ($$$1 \le n \le 1000$$$) — the number of windows in the building.</p></div><div class="output-specification" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Output</div><p>For each test case, if a building with the new layout and the given number of windows just can't exist, print $$$-1$$$.</p><p>Otherwise, print three non-negative integers — the possible number of three-room, five-room, and seven-room apartments. If there are multiple answers, print any of them.</p></div><div class="sample-tests" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Example</div><div class="sample-test" bis_skin_checked="1"><div class="input" bis_skin_checked="1"><div class="title" bis_skin_checked="1">Input<div title="Copy" data-clipboard-target="#id004905154242564864" id="id0017113626008783223" class="input-output-copier" bis_skin_checked="1">Copy</div></div><pre id="id004905154242564864">4
30
67
4
14
</pre></div><div class="output" bis_skin_checked="1"><div class="title" bis_skin_checked="1">Output<div title="Copy" data-clipboard-target="#id0023018629684811975" id="id0005951258217174349" class="input-output-copier" bis_skin_checked="1">Copy</div></div><pre id="id0023018629684811975">2 2 2
7 5 3
-1
0 0 2
</pre></div></div></div>