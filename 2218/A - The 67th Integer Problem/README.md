<h2><a href="https://codeforces.com/contest/2218/problem/A" target="_blank" rel="noopener noreferrer">2218A — The 67th Integer Problem</a></h2>

| | |
|---|---|
| **Difficulty** | 800 |
| **Language** | C++17 (GCC 7-32) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 2218A](https://codeforces.com/contest/2218/problem/A) |

## Topics
`brute force` `games` `implementation` `math`

---

## Problem Statement

<div class="header" bis_skin_checked="1"><div class="title" bis_skin_checked="1">A. The 67th Integer Problem</div><div class="time-limit" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">time limit per test</div>1 second</div><div class="memory-limit" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">memory limit per test</div>256 megabytes</div><div class="input-file input-standard" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">input</div>standard input</div><div class="output-file output-standard" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">output</div>standard output</div></div><div bis_skin_checked="1"><p><span class="tex-font-size-small"><span class="tex-font-style-it">Welcome to the New World, O Esteemed Earthly Visitor. You've been summoned by Macaque, a primate with four legs, a god complex and a terminal addiction to the word "trivial". You are Undertaking a Journey of Great Importance. Such Incredible Importance. No Journey Will EVER be as IMPORTANT as this one (and nothing this narrator says will sound so distinctly... orange again). You are implored to cooperate with Macaque, for his wrath (and joblessness) are unending. There is no room for error or incompetence. Lousiness shall be met with the full force of the law.</span></span></p><p>Macaque is given an integer $$$x$$$. Your task is to choose an integer $$$y$$$ such that the value of $$$\operatorname{min}(x, y)$$$$$$^{\text{∗}}$$$ is <span class="tex-font-style-bf">maximized</span>.</p><p>If there are multiple valid $$$y$$$, you may output any of them.</p><div class="statement-footnote" bis_skin_checked="1"><p>$$$^{\text{∗}}$$$$$$\operatorname{min}(x, y)$$$ is defined as the minimum of integers $$$x$$$ and $$$y$$$.</p></div></div><div class="input-specification" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Input</div><p>Each test contains multiple test cases. The first line contains the number of test cases $$$t$$$ ($$$1 \le t \le 6767$$$). The description of the test cases follows.</p><p>The only line of each test case contains a single integer $$$x$$$ ($$$-67 \le x \le 67$$$).</p></div><div class="output-specification" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Output</div><p>For each test case, output one integer $$$y$$$ ($$$-67 \le y \le 67$$$) such that $$$\min(x, y)$$$ is maximized.</p></div><div class="sample-tests" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Example</div><div class="sample-test" bis_skin_checked="1"><div class="input" bis_skin_checked="1"><div class="title" bis_skin_checked="1">Input<div title="Copy" data-clipboard-target="#id0028360147005482284" id="id005390352029531702" class="input-output-copier" bis_skin_checked="1">Copy</div></div><pre id="id0028360147005482284">3
1
3
5
</pre></div><div class="output" bis_skin_checked="1"><div class="title" bis_skin_checked="1">Output<div title="Copy" data-clipboard-target="#id008354918814227018" id="id0024948235637248095" class="input-output-copier" bis_skin_checked="1">Copy</div></div><pre id="id008354918814227018">2
4
6
</pre></div></div></div><div class="note" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Note</div><p>In the first case, $$$2$$$ is a possible answer because $$$\min(1, 2) = 1$$$, which can be shown to be maximal.</p></div>