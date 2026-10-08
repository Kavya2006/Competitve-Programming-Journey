<h2><a href="https://codeforces.com/contest/1837/problem/A" target="_blank" rel="noopener noreferrer">1837A — Grasshopper on a Line</a></h2>

| | |
|---|---|
| **Difficulty** | 800 |
| **Language** | C++17 (GCC 7-32) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1837A](https://codeforces.com/contest/1837/problem/A) |

## Topics
`constructive algorithms` `math`

---

## Problem Statement

<div class="header" bis_skin_checked="1"><div class="title" bis_skin_checked="1">A. Grasshopper on a Line</div><div class="time-limit" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">time limit per test</div>2 seconds</div><div class="memory-limit" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">memory limit per test</div>256 megabytes</div><div class="input-file input-standard" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">input</div>standard input</div><div class="output-file output-standard" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">output</div>standard output</div></div><div bis_skin_checked="1"><p>You are given two integers $$$x$$$ and $$$k$$$. Grasshopper starts in a point $$$0$$$ on an OX axis. In one move, it can jump some integer distance, <span class="tex-font-style-bf">that is not divisible by $$$k$$$</span>, to the left or to the right.</p><p>What's the smallest number of moves it takes the grasshopper to reach point $$$x$$$? What are these moves? If there are multiple answers, print any of them.</p></div><div class="input-specification" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Input</div><p>The first line contains a single integer $$$t$$$ ($$$1 \le t \le 1000$$$) — the number of testcases.</p><p>The only line of each testcase contains two integers $$$x$$$ and $$$k$$$ ($$$1 \le x \le 100$$$; $$$2 \le k \le 100$$$) — the endpoint and the constraint on the jumps, respectively.</p></div><div class="output-specification" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Output</div><p>For each testcase, in the first line, print a single integer $$$n$$$ — the smallest number of moves it takes the grasshopper to reach point $$$x$$$.</p><p>In the second line, print $$$n$$$ integers, each of them not divisible by $$$k$$$. A positive integer would mean jumping to the right, a negative integer would mean jumping to the left. The endpoint after the jumps should be exactly $$$x$$$.</p><p>Each jump distance should be from $$$-10^9$$$ to $$$10^9$$$. In can be shown that, for any solution with the smallest number of jumps, there exists a solution with the same number of jumps such that each jump is from $$$-10^9$$$ to $$$10^9$$$.</p><p>It can be shown that the answer always exists under the given constraints. If there are multiple answers, print any of them.</p></div><div class="sample-tests" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Example</div><div class="sample-test" bis_skin_checked="1"><div class="input" bis_skin_checked="1"><div class="title" bis_skin_checked="1">Input<div title="Copy" data-clipboard-target="#id008374697361593023" id="id006221494592338338" class="input-output-copier" bis_skin_checked="1">Copy</div></div><pre id="id008374697361593023"><div class="test-example-line test-example-line-even test-example-line-0" bis_skin_checked="1">3</div><div class="test-example-line test-example-line-odd test-example-line-1" bis_skin_checked="1">10 2</div><div class="test-example-line test-example-line-even test-example-line-2" bis_skin_checked="1">10 3</div><div class="test-example-line test-example-line-odd test-example-line-3" bis_skin_checked="1">3 4</div></pre></div><div class="output" bis_skin_checked="1"><div class="title" bis_skin_checked="1">Output<div title="Copy" data-clipboard-target="#id0020833984111941595" id="id007329656202753748" class="input-output-copier" bis_skin_checked="1">Copy</div></div><pre id="id0020833984111941595">2
7 3
1
10
1
3
</pre></div></div></div>