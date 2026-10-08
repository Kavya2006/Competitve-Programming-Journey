<h2><a href="https://codeforces.com/contest/1382/problem/B" target="_blank" rel="noopener noreferrer">1382B — Sequential Nim</a></h2>

| | |
|---|---|
| **Difficulty** | 1100 |
| **Language** | C++17 (GCC 7-32) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1382B](https://codeforces.com/contest/1382/problem/B) |

## Topics
`dp` `games`

---

## Problem Statement

<div class="header" bis_skin_checked="1"><div class="title" bis_skin_checked="1">B. Sequential Nim</div><div class="time-limit" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">time limit per test</div>1 second</div><div class="memory-limit" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">memory limit per test</div>256 megabytes</div><div class="input-file input-standard" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">input</div>standard input</div><div class="output-file output-standard" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">output</div>standard output</div></div><div bis_skin_checked="1"><p>There are $$$n$$$ piles of stones, where the $$$i$$$-th pile has $$$a_i$$$ stones. Two people play a game, where they take alternating turns removing stones.</p><p>In a move, a player may remove a positive number of stones from the <span class="tex-font-style-bf">first non-empty pile</span> (the pile with the minimal index, that has at least one stone). The first player who cannot make a move (because all piles are empty) loses the game. If both players play optimally, determine the winner of the game.</p></div><div class="input-specification" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Input</div><p>The first line contains a single integer $$$t$$$ ($$$1\le t\le 1000$$$)  — the number of test cases. Next $$$2t$$$ lines contain descriptions of test cases.</p><p>The first line of each test case contains a single integer $$$n$$$ ($$$1\le n\le 10^5$$$)  — the number of piles.</p><p>The second line of each test case contains $$$n$$$ integers $$$a_1,\ldots,a_n$$$ ($$$1\le a_i\le 10^9$$$)  — $$$a_i$$$ is equal to the number of stones in the $$$i$$$-th pile.</p><p>It is guaranteed that the sum of $$$n$$$ for all test cases does not exceed $$$10^5$$$.</p></div><div class="output-specification" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Output</div><p>For each test case, if the player who makes the first move will win, output "<span class="tex-font-style-tt">First</span>". Otherwise, output "<span class="tex-font-style-tt">Second</span>".</p></div><div class="sample-tests" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Example</div><div class="sample-test" bis_skin_checked="1"><div class="input" bis_skin_checked="1"><div class="title" bis_skin_checked="1">Input<div title="Copy" data-clipboard-target="#id0036305048604150725" id="id004364373450850736" class="input-output-copier" bis_skin_checked="1">Copy</div></div><pre id="id0036305048604150725">7
3
2 5 4
8
1 1 1 1 1 1 1 1
6
1 2 3 4 5 6
6
1 1 2 1 2 2
1
1000000000
5
1 2 2 1 1
3
1 1 1
</pre></div><div class="output" bis_skin_checked="1"><div class="title" bis_skin_checked="1">Output<div title="Copy" data-clipboard-target="#id008630003462330359" id="id003560499678228435" class="input-output-copier" bis_skin_checked="1">Copy</div></div><pre id="id008630003462330359">First
Second
Second
First
First
Second
First
</pre></div></div></div><div class="note" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Note</div><p>In the first test case, the first player will win the game. His winning strategy is: </p><ol> <li> The first player should take the stones from the first pile. He will take $$$1$$$ stone. The numbers of stones in piles will be $$$[1, 5, 4]$$$. </li><li> The second player should take the stones from the first pile. He will take $$$1$$$ stone because he can't take any other number of stones. The numbers of stones in piles will be $$$[0, 5, 4]$$$. </li><li> The first player should take the stones from the second pile because the first pile is empty. He will take $$$4$$$ stones. The numbers of stones in piles will be $$$[0, 1, 4]$$$. </li><li> The second player should take the stones from the second pile because the first pile is empty. He will take $$$1$$$ stone because he can't take any other number of stones. The numbers of stones in piles will be $$$[0, 0, 4]$$$. </li><li> The first player should take the stones from the third pile because the first and second piles are empty. He will take $$$4$$$ stones. The numbers of stones in piles will be $$$[0, 0, 0]$$$. </li><li> The second player will lose the game because all piles will be empty. </li></ol></div>