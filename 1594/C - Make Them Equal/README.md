<h2><a href="https://codeforces.com/contest/1594/problem/C" target="_blank" rel="noopener noreferrer">1594C — Make Them Equal</a></h2>

| | |
|---|---|
| **Difficulty** | 1200 |
| **Language** | C++17 (GCC 7-32) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1594C](https://codeforces.com/contest/1594/problem/C) |

## Topics
`brute force` `greedy` `math` `strings`

---

## Problem Statement

<div class="header" bis_skin_checked="1"><div class="title" bis_skin_checked="1">C. Make Them Equal</div><div class="time-limit" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">time limit per test</div>2 seconds</div><div class="memory-limit" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">memory limit per test</div>256 megabytes</div><div class="input-file input-standard" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">input</div>standard input</div><div class="output-file output-standard" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">output</div>standard output</div></div><div bis_skin_checked="1"><p>Theofanis has a string $$$s_1 s_2 \dots s_n$$$ and a character $$$c$$$. He wants to make all characters of the string equal to $$$c$$$ using the minimum number of operations.</p><p>In one operation he can choose a number $$$x$$$ ($$$1 \le x \le n$$$) and <span class="tex-font-style-bf">for every position $$$i$$$</span>, where $$$i$$$ is <span class="tex-font-style-bf">not</span> divisible by $$$x$$$, replace $$$s_i$$$ with $$$c$$$. </p><p>Find the minimum number of operations required to make all the characters equal to $$$c$$$ and the $$$x$$$-s that he should use in his operations.</p></div><div class="input-specification" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Input</div><p>The first line contains a single integer $$$t$$$ ($$$1 \le t \le 10^4$$$) — the number of test cases.</p><p>The first line of each test case contains the integer $$$n$$$ ($$$3 \le n \le 3 \cdot 10^5$$$) and a lowercase Latin letter $$$c$$$ — the length of the string $$$s$$$ and the character the resulting string should consist of.</p><p>The second line of each test case contains a string $$$s$$$ of lowercase Latin letters — the initial string.</p><p>It is guaranteed that the sum of $$$n$$$ over all test cases does not exceed $$$3 \cdot 10^5$$$.</p></div><div class="output-specification" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Output</div><p>For each test case, firstly print one integer $$$m$$$ — the minimum number of operations required to make all the characters equal to $$$c$$$.</p><p>Next, print $$$m$$$ integers $$$x_1, x_2, \dots, x_m$$$ ($$$1 \le x_j \le n$$$) — the $$$x$$$-s that should be used in the order they are given.</p><p>It can be proved that under given constraints, an answer always exists. If there are multiple answers, print any.</p></div><div class="sample-tests" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Example</div><div class="sample-test" bis_skin_checked="1"><div class="input" bis_skin_checked="1"><div class="title" bis_skin_checked="1">Input<div title="Copy" data-clipboard-target="#id008751116775734352" id="id004793435828721909" class="input-output-copier" bis_skin_checked="1">Copy</div></div><pre id="id008751116775734352">3
4 a
aaaa
4 a
baaa
4 b
bzyx
</pre></div><div class="output" bis_skin_checked="1"><div class="title" bis_skin_checked="1">Output<div title="Copy" data-clipboard-target="#id007069446698388653" id="id006572598647005975" class="input-output-copier" bis_skin_checked="1">Copy</div></div><pre id="id007069446698388653">0
1
2
2 
2 3
</pre></div></div></div><div class="note" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Note</div><p>Let's describe what happens in the third test case: </p><ol> <li> $$$x_1 = 2$$$: we choose all positions that are not divisible by $$$2$$$ and replace them, i. e. <span class="tex-font-style-tt"><span class="tex-font-style-underline">b</span>z<span class="tex-font-style-underline">y</span>x</span> $$$\rightarrow$$$ <span class="tex-font-style-tt">bzbx</span>; </li><li> $$$x_2 = 3$$$: we choose all positions that are not divisible by $$$3$$$ and replace them, i. e. <span class="tex-font-style-tt"><span class="tex-font-style-underline">bz</span>b<span class="tex-font-style-underline">x</span></span> $$$\rightarrow$$$ <span class="tex-font-style-tt">bbbb</span>. </li></ol></div>