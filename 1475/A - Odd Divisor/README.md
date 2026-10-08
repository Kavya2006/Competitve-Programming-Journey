<h2><a href="https://codeforces.com/contest/1475/problem/A" target="_blank" rel="noopener noreferrer">1475A — Odd Divisor</a></h2>

| | |
|---|---|
| **Difficulty** | 900 |
| **Language** | C++17 (GCC 7-32) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1475A](https://codeforces.com/contest/1475/problem/A) |

## Topics
`math` `number theory`

---

## Problem Statement

<div class="header" bis_skin_checked="1"><div class="title" bis_skin_checked="1">A. Odd Divisor</div><div class="time-limit" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">time limit per test</div>2 seconds</div><div class="memory-limit" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">memory limit per test</div>256 megabytes</div><div class="input-file input-standard" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">input</div>standard input</div><div class="output-file output-standard" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">output</div>standard output</div></div><div bis_skin_checked="1"><p>You are given an integer $$$n$$$. Check if $$$n$$$ has an <span class="tex-font-style-bf">odd</span> divisor, greater than one (does there exist such a number $$$x$$$ ($$$x  \gt  1$$$) that $$$n$$$ is divisible by $$$x$$$ and $$$x$$$ is odd).</p><p>For example, if $$$n=6$$$, then there is $$$x=3$$$. If $$$n=4$$$, then such a number does not exist.</p></div><div class="input-specification" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Input</div><p>The first line contains one integer $$$t$$$ ($$$1 \le t \le 10^4$$$) — the number of test cases. Then $$$t$$$ test cases follow.</p><p>Each test case contains one integer $$$n$$$ ($$$2 \le n \le 10^{14}$$$).</p><p>Please note, that the input for some test cases won't fit into $$$32$$$-bit integer type, so you should use at least $$$64$$$-bit integer type in your programming language.</p></div><div class="output-specification" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Output</div><p>For each test case, output on a separate line: </p><ul> <li> "<span class="tex-font-style-tt">YES</span>" if $$$n$$$ has an <span class="tex-font-style-bf">odd</span> divisor, greater than one; </li><li> "<span class="tex-font-style-tt">NO</span>" otherwise. </li></ul><p>You can output "<span class="tex-font-style-tt">YES</span>" and "<span class="tex-font-style-tt">NO</span>" in any case (for example, the strings <span class="tex-font-style-tt">yEs</span>, <span class="tex-font-style-tt">yes</span>, <span class="tex-font-style-tt">Yes</span> and <span class="tex-font-style-tt">YES</span> will be recognized as positive).</p></div><div class="sample-tests" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Example</div><div class="sample-test" bis_skin_checked="1"><div class="input" bis_skin_checked="1"><div class="title" bis_skin_checked="1">Input<div title="Copy" data-clipboard-target="#id0008265522056122321" id="id005951610678025313" class="input-output-copier" bis_skin_checked="1">Copy</div></div><pre id="id0008265522056122321">6
2
3
4
5
998244353
1099511627776
</pre></div><div class="output" bis_skin_checked="1"><div class="title" bis_skin_checked="1">Output<div title="Copy" data-clipboard-target="#id002686687278737766" id="id007478264769021874" class="input-output-copier" bis_skin_checked="1">Copy</div></div><pre id="id002686687278737766">NO
YES
NO
YES
YES
NO
</pre></div></div></div>