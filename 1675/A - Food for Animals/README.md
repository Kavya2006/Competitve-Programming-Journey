<h2><a href="https://codeforces.com/contest/1675/problem/A" target="_blank" rel="noopener noreferrer">1675A — Food for Animals</a></h2>

| | |
|---|---|
| **Difficulty** | 800 |
| **Language** | C++17 (GCC 7-32) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1675A](https://codeforces.com/contest/1675/problem/A) |

## Topics
`greedy` `math`

---

## Problem Statement

<div class="header"><div class="title">A. Food for Animals</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>In the pet store on sale there are:</p><ul> <li> $$$a$$$ packs of dog food; </li><li> $$$b$$$ packs of cat food; </li><li> $$$c$$$ packs of universal food (such food is suitable for both dogs and cats). </li></ul><p>Polycarp has $$$x$$$ dogs and $$$y$$$ cats. Is it possible that he will be able to buy food for all his animals in the store? Each of his dogs and each of his cats should receive one pack of suitable food for it.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line of input contains an integer $$$t$$$ ($$$1 \le t \le 10^4$$$) — the number of test cases in the input.</p><p>Then $$$t$$$ lines are given, each containing a description of one test case. Each description consists of five integers $$$a, b, c, x$$$ and $$$y$$$ ($$$0 \le a,b,c,x,y \le 10^8$$$).</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case in a separate line, output:</p><ul> <li> <span class="tex-font-style-tt">YES</span>, if suitable food can be bought for each of $$$x$$$ dogs and for each of $$$y$$$ cats; </li><li> <span class="tex-font-style-tt">NO</span> else. </li></ul><p>You can output <span class="tex-font-style-tt">YES</span> and <span class="tex-font-style-tt">NO</span> in any case (for example, strings <span class="tex-font-style-tt">yEs</span>, <span class="tex-font-style-tt">yes</span>, <span class="tex-font-style-tt">Yes</span> and <span class="tex-font-style-tt">YES</span> will be recognized as a positive response).</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0033035750707638467" id="id007642055168567982" class="input-output-copier">Copy</div></div><pre id="id0033035750707638467"><div class="test-example-line test-example-line-even test-example-line-0">7</div><div class="test-example-line test-example-line-odd test-example-line-1">1 1 4 2 3</div><div class="test-example-line test-example-line-even test-example-line-2">0 0 0 0 0</div><div class="test-example-line test-example-line-odd test-example-line-3">5 5 0 4 6</div><div class="test-example-line test-example-line-even test-example-line-4">1 1 1 1 1</div><div class="test-example-line test-example-line-odd test-example-line-5">50000000 50000000 100000000 100000000 100000000</div><div class="test-example-line test-example-line-even test-example-line-6">0 0 0 100000000 100000000</div><div class="test-example-line test-example-line-odd test-example-line-7">1 3 2 2 5</div></pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id0024476840307686687" id="id0039736892768181387" class="input-output-copier">Copy</div></div><pre id="id0024476840307686687">YES
YES
NO
YES
YES
NO
NO
</pre></div></div></div>