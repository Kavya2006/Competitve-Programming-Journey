<h2><a href="https://codeforces.com/contest/1754/problem/B" target="_blank" rel="noopener noreferrer">1754B — Kevin and Permutation</a></h2>

| | |
|---|---|
| **Difficulty** | 800 |
| **Language** | C++17 (GCC 7-32) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1754B](https://codeforces.com/contest/1754/problem/B) |

## Topics
`constructive algorithms` `greedy` `math`

---

## Problem Statement

<div class="header"><div class="title">B. Kevin and Permutation</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>For his birthday, Kevin received the set of pairwise distinct numbers $$$1, 2, 3, \ldots, n$$$ as a gift.</p><p>He is going to arrange these numbers in a way such that the minimum absolute difference between two consecutive numbers be maximum possible. More formally, if he arranges numbers in order $$$p_1, p_2, \ldots, p_n$$$, he wants to maximize the value $$$$$$\min \limits_{i=1}^{n - 1} \lvert p_{i + 1} - p_i \rvert,$$$$$$ where $$$|x|$$$ denotes the absolute value of $$$x$$$.</p><p>Help Kevin to do that.</p></div><div class="input-specification"><div class="section-title">Input</div><p>Each test consists of multiple test cases. The first line contains a single integer $$$t$$$ ($$$1 \le t \le 100$$$) — the number of test cases. Description of the test cases follows.</p><p>The only line of each test case contains an integer $$$n$$$ ($$$2 \le n \leq 1\,000$$$) — the size of the set.</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case print a single line containing $$$n$$$ distinct integers $$$p_1, p_2, \ldots, p_n$$$ ($$$1 \le p_i \le n$$$) describing the arrangement that maximizes the minimum absolute difference of consecutive elements. </p><p>Formally, you have to print a permutation $$$p$$$ which maximizes the value $$$\min \limits_{i=1}^{n - 1} \lvert p_{i + 1} - p_i \rvert$$$.</p><p>If there are multiple optimal solutions, print any of them.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id004957394134979757" id="id003129156825747853" class="input-output-copier">Copy</div></div><pre id="id004957394134979757"><div class="test-example-line test-example-line-even test-example-line-0">2</div><div class="test-example-line test-example-line-odd test-example-line-1">4</div><div class="test-example-line test-example-line-even test-example-line-2">3</div></pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id003911377550661854" id="id008351933648680772" class="input-output-copier">Copy</div></div><pre id="id003911377550661854">2 4 1 3
1 2 3
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the first test case the minimum absolute difference of consecutive elements equals $$$\min \{\lvert 4 - 2 \rvert, \lvert 1 - 4 \rvert, \lvert 3 - 1 \rvert \} = \min \{2, 3, 2\} = 2$$$. It's easy to prove that this answer is optimal.</p><p>In the second test case each permutation of numbers $$$1, 2, 3$$$ is an optimal answer. The minimum absolute difference of consecutive elements equals to $$$1$$$.</p></div>