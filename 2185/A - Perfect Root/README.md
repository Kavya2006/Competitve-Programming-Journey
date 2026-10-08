<h2><a href="https://codeforces.com/contest/2185/problem/A" target="_blank" rel="noopener noreferrer">2185A — Perfect Root</a></h2>

| | |
|---|---|
| **Difficulty** | 800 |
| **Language** | C++17 (GCC 7-32) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 2185A](https://codeforces.com/contest/2185/problem/A) |

## Topics
`constructive algorithms` `math`

---

## Problem Statement

<div class="header" bis_skin_checked="1"><div class="title" bis_skin_checked="1">A. Perfect Root</div><div class="time-limit" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">time limit per test</div>1 second</div><div class="memory-limit" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">memory limit per test</div>256 megabytes</div><div class="input-file input-standard" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">input</div>standard input</div><div class="output-file output-standard" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">output</div>standard output</div></div><div bis_skin_checked="1"><p>A positive integer $$$x$$$ is a perfect root if there exists an integer $$$y$$$ such that $$$\sqrt{y} = x$$$. For example, $$$5$$$ is a perfect root because $$$\sqrt{25} = 5$$$.</p><p>For each test case, output $$$n$$$ distinct perfect roots. Note that the values only need to be distinct within each test case; you can use the same value in different test cases.</p></div><div class="input-specification" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Input</div><p>The first line of the input contains a single integer $$$t$$$ ($$$1 \leq t \leq 20$$$) — the number of test cases.</p><p>The only line of each test case contains an integer $$$n$$$ ($$$1 \leq n \leq 20$$$) — the number of perfect roots to output.</p></div><div class="output-specification" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Output</div><p>For each test case, output $$$n$$$ distinct perfect roots. Each perfect root $$$x$$$ must be in the range $$$1 \leq x \leq 10^9$$$.</p></div><div class="sample-tests" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Example</div><div class="sample-test" bis_skin_checked="1"><div class="input" bis_skin_checked="1"><div class="title" bis_skin_checked="1">Input<div title="Copy" data-clipboard-target="#id0043752529839024734" id="id005787468824965343" class="input-output-copier" bis_skin_checked="1">Copy</div></div><pre id="id0043752529839024734">3
1
2
5
</pre></div><div class="output" bis_skin_checked="1"><div class="title" bis_skin_checked="1">Output<div title="Copy" data-clipboard-target="#id009247058623713026" id="id005822552677619194" class="input-output-copier" bis_skin_checked="1">Copy</div></div><pre id="id009247058623713026">1
2 4
2 102 43 1 21</pre></div></div></div><div class="note" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Note</div><p>For the first test case: </p><ul> <li> $$$1$$$ is a perfect root because $$$\sqrt{1} = 1$$$. </li></ul><p>For the second test case: </p><ul> <li> $$$2$$$ is a perfect root because $$$\sqrt{4} = 2$$$. </li><li> $$$4$$$ is a perfect root because $$$\sqrt{16} = 4$$$. </li></ul></div>