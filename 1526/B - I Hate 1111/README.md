<h2><a href="https://codeforces.com/contest/1526/problem/B" target="_blank" rel="noopener noreferrer">1526B — I Hate 1111</a></h2>

| | |
|---|---|
| **Difficulty** | 1400 |
| **Language** | C++17 (GCC 7-32) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1526B](https://codeforces.com/contest/1526/problem/B) |

## Topics
`dp` `math` `number theory`

---

## Problem Statement

<div class="header" bis_skin_checked="1"><div class="title" bis_skin_checked="1">B. I Hate 1111</div><div class="time-limit" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">time limit per test</div>1 second</div><div class="memory-limit" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">memory limit per test</div>256 megabytes</div><div class="input-file input-standard" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">input</div>standard input</div><div class="output-file output-standard" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">output</div>standard output</div></div><div bis_skin_checked="1"><p>You are given an integer $$$x$$$. Can you make $$$x$$$ by summing up some number of $$$11, 111, 1111, 11111, \ldots$$$? (You can use any number among them any number of times).</p><p>For instance, </p><ul> <li> $$$33=11+11+11$$$ </li><li> $$$144=111+11+11+11$$$ </li></ul></div><div class="input-specification" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Input</div><p>The first line of input contains a single integer $$$t$$$ $$$(1 \leq t \leq 10000)$$$ — the number of testcases.</p><p>The first and only line of each testcase contains a single integer $$$x$$$ $$$(1 \leq x \leq 10^9)$$$ — the number you have to make.</p></div><div class="output-specification" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Output</div><p>For each testcase, you should output a single string. If you can make $$$x$$$, output "YES" (without quotes). Otherwise, output "NO".</p><p>You can print each letter of "YES" and "NO" in any case (upper or lower).</p></div><div class="sample-tests" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Example</div><div class="sample-test" bis_skin_checked="1"><div class="input" bis_skin_checked="1"><div class="title" bis_skin_checked="1">Input<div title="Copy" data-clipboard-target="#id0024653713875724448" id="id007009128611188764" class="input-output-copier" bis_skin_checked="1">Copy</div></div><pre id="id0024653713875724448">3
33
144
69
</pre></div><div class="output" bis_skin_checked="1"><div class="title" bis_skin_checked="1">Output<div title="Copy" data-clipboard-target="#id008064688134873632" id="id00027269142199239704" class="input-output-copier" bis_skin_checked="1">Copy</div></div><pre id="id008064688134873632">YES
YES
NO
</pre></div></div></div><div class="note" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Note</div><p>Ways to make $$$33$$$ and $$$144$$$ were presented in the statement. It can be proved that we can't present $$$69$$$ this way.</p></div>