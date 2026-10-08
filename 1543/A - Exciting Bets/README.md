<h2><a href="https://codeforces.com/contest/1543/problem/A" target="_blank" rel="noopener noreferrer">1543A — Exciting Bets</a></h2>

| | |
|---|---|
| **Difficulty** | 900 |
| **Language** | C++17 (GCC 7-32) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1543A](https://codeforces.com/contest/1543/problem/A) |

## Topics
`greedy` `math` `number theory`

---

## Problem Statement

<div class="header" bis_skin_checked="1"><div class="title" bis_skin_checked="1">A. Exciting Bets</div><div class="time-limit" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">time limit per test</div>1 second</div><div class="memory-limit" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">memory limit per test</div>256 megabytes</div><div class="input-file input-standard" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">input</div>standard input</div><div class="output-file output-standard" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">output</div>standard output</div></div><div bis_skin_checked="1"><p>Welcome to Rockport City!</p><p>It is time for your first ever race in the game against Ronnie. To make the race interesting, you have bet $$$a$$$ dollars and Ronnie has bet $$$b$$$ dollars. But the fans seem to be disappointed. The excitement of the fans is given by $$$gcd(a,b)$$$, where $$$gcd(x, y)$$$ denotes the <a href="https://en.wikipedia.org/wiki/Greatest_common_divisor">greatest common divisor (GCD)</a> of integers $$$x$$$ and $$$y$$$. To make the race more exciting, you can perform two types of operations:</p><ol> <li> Increase both $$$a$$$ and $$$b$$$ by $$$1$$$. </li><li> Decrease both $$$a$$$ and $$$b$$$ by $$$1$$$. This operation can only be performed if both $$$a$$$ and $$$b$$$ are greater than $$$0$$$. </li></ol><p>In one move, you can perform any one of these operations. You can perform arbitrary (possibly zero) number of moves. Determine the maximum excitement the fans can get and the minimum number of moves required to achieve it.</p><p>Note that $$$gcd(x,0)=x$$$ for any $$$x \ge 0$$$.</p></div><div class="input-specification" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Input</div><p>The first line of input contains a single integer $$$t$$$ ($$$1\leq t\leq 5\cdot 10^3$$$) — the number of test cases.</p><p>The first and the only line of each test case contains two integers $$$a$$$ and $$$b$$$ ($$$0\leq a, b\leq 10^{18}$$$).</p></div><div class="output-specification" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Output</div><p>For each test case, print a single line containing two integers. </p><p>If the fans can get infinite excitement, print <span class="tex-font-style-tt">0 0</span>.</p><p>Otherwise, the first integer must be the maximum excitement the fans can get, and the second integer must be the minimum number of moves required to achieve that excitement.</p></div><div class="sample-tests" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Example</div><div class="sample-test" bis_skin_checked="1"><div class="input" bis_skin_checked="1"><div class="title" bis_skin_checked="1">Input<div title="Copy" data-clipboard-target="#id0008171462663605134" id="id006450799373246133" class="input-output-copier" bis_skin_checked="1">Copy</div></div><pre id="id0008171462663605134">4
8 5
1 2
4 4
3 9
</pre></div><div class="output" bis_skin_checked="1"><div class="title" bis_skin_checked="1">Output<div title="Copy" data-clipboard-target="#id005692334786481862" id="id001468350342510597" class="input-output-copier" bis_skin_checked="1">Copy</div></div><pre id="id005692334786481862">3 1
1 0
0 0
6 3
</pre></div></div></div><div class="note" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Note</div><p>For the first test case, you can apply the first operation $$$1$$$ time to get $$$a=9$$$ and $$$b=6$$$. It can be shown that $$$3$$$ is the maximum excitement possible.</p><p>For the second test case, no matter how many operations you apply, the fans will always have an excitement equal to $$$1$$$. Since the initial excitement is also $$$1$$$, you don't need to apply any operation.</p><p>For the third case, the fans can get infinite excitement by applying the first operation an infinite amount of times.</p><p>For the fourth test case, you can apply the second operation $$$3$$$ times to get $$$a=0$$$ and $$$b=6$$$. Since, $$$gcd(0,6)=6$$$, the fans will get an excitement of $$$6$$$.</p></div>