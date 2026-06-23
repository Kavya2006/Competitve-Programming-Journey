<h2><a href="https://codeforces.com/contest/1675/problem/D" target="_blank" rel="noopener noreferrer">1675D — Vertical Paths</a></h2>

| | |
|---|---|
| **Difficulty** | 1300 |
| **Language** | C++17 (GCC 7-32) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1675D](https://codeforces.com/contest/1675/problem/D) |

## Topics
`graphs` `implementation` `trees`

---

## Problem Statement

<div class="header"><div class="title">D. Vertical Paths</div><div class="time-limit"><div class="property-title">time limit per test</div>2 seconds</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>You are given a rooted tree consisting of $$$n$$$ vertices. Vertices are numbered from $$$1$$$ to $$$n$$$. Any vertex can be the root of a tree.</p><p>A <span class="tex-font-style-it">tree</span> is a connected undirected graph without cycles. A <span class="tex-font-style-it">rooted tree</span> is a tree with a selected vertex, which is called the <span class="tex-font-style-it">root</span>.</p><p>The tree is specified by an array of parents $$$p$$$ containing $$$n$$$ numbers: $$$p_i$$$ is a parent of the vertex with the index $$$i$$$. The <span class="tex-font-style-it">parent</span> of a vertex $$$u$$$ is a vertex that is the next vertex on the shortest path from $$$u$$$ to the root. For example, on the simple path from $$$5$$$ to $$$3$$$ (the root), the next vertex would be $$$1$$$, so the parent of $$$5$$$ is $$$1$$$.</p><p>The root has no parent, so for it, the value of $$$p_i$$$ is $$$i$$$ (the root is the only vertex for which $$$p_i=i$$$).</p><p>Find such a set of paths that:</p><ul> <li> each vertex belongs to exactly one path, each path can contain one or more vertices; </li><li> in each path each next vertex — is a son of the current vertex (that is, paths always lead down — from parent to son); </li><li> number of paths is <span class="tex-font-style-bf">minimal</span>. </li></ul><p>For example, if $$$n=5$$$ and $$$p=[3, 1, 3, 3, 1]$$$, then the tree can be divided into three paths: </p><ol> <li> $$$3 \rightarrow 1 \rightarrow 5$$$ (path of $$$3$$$ vertices), </li><li> $$$4$$$ (path of $$$1$$$ vertices). </li><li> $$$2$$$ (path of $$$1$$$ vertices). </li></ol><center> <img class="tex-graphics" src="https://espresso.codeforces.com/c3662762f4d6bdd1632c9d420594d386768e329c.png" style="zoom: 50.0%;max-width: 100.0%;max-height: 100.0%;">   <span class="tex-font-size-small">Example of splitting a root tree into three paths for $$$n=5$$$, the root of the tree — node $$$3$$$.</span> </center></div><div class="input-specification"><div class="section-title">Input</div><p>The first line of input data contains an integer $$$t$$$ ($$$1 \le t \le 10^4$$$) — the number of test cases in the test.</p><p>Each test case consists of two lines.</p><p>The first of them contains an integer $$$n$$$ ($$$1 \le n \le 2 \cdot 10^5$$$). It is the number of vertices in the tree.</p><p>The second line contains $$$n$$$ integers $$$p_1, p_2, \dots, p_n$$$ ($$$1 \le p_i \le n$$$). It is guaranteed that the $$$p$$$ array encodes some rooted tree.</p><p>It is guaranteed that the sum of the values $$$n$$$ over all test cases in the test does not exceed $$$2 \cdot 10^5$$$.</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case on the first line, output an integer $$$m$$$ — the minimum number of non-intersecting leading down paths that can cover all vertices of the tree.</p><p>Then print $$$m$$$ pairs of lines containing path descriptions. In the first of them print the length of the path, in the second — the sequence of vertices specifying that path in the order from top to bottom. You can output the paths in any order.</p><p>If there are several answers, output any of them.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id005621494070804886" id="id007591052832559293" class="input-output-copier">Copy</div></div><pre id="id005621494070804886"><div class="test-example-line test-example-line-even test-example-line-0">6</div><div class="test-example-line test-example-line-odd test-example-line-1">5</div><div class="test-example-line test-example-line-odd test-example-line-1">3 1 3 3 1</div><div class="test-example-line test-example-line-even test-example-line-2">4</div><div class="test-example-line test-example-line-even test-example-line-2">1 1 4 1</div><div class="test-example-line test-example-line-odd test-example-line-3">7</div><div class="test-example-line test-example-line-odd test-example-line-3">1 1 2 3 4 5 6</div><div class="test-example-line test-example-line-even test-example-line-4">1</div><div class="test-example-line test-example-line-even test-example-line-4">1</div><div class="test-example-line test-example-line-odd test-example-line-5">6</div><div class="test-example-line test-example-line-odd test-example-line-5">4 4 4 4 1 2</div><div class="test-example-line test-example-line-even test-example-line-6">4</div><div class="test-example-line test-example-line-even test-example-line-6">2 2 2 2</div></pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id002384664960561068" id="id0005132346771303764" class="input-output-copier">Copy</div></div><pre id="id002384664960561068">3
3
3 1 5
1
2
1
4

2
2
1 2
2
4 3

1
7
1 2 3 4 5 6 7

1
1
1

3
3
4 1 5
2
2 6
1
3

3
2
2 1
1
3
1
4
</pre></div></div></div>