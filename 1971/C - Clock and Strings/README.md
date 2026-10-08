<h2><a href="https://codeforces.com/contest/1971/problem/C" target="_blank" rel="noopener noreferrer">1971C — Clock and Strings</a></h2>

| | |
|---|---|
| **Difficulty** | 900 |
| **Language** | C++17 (GCC 7-32) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1971C](https://codeforces.com/contest/1971/problem/C) |

## Topics
`implementation`

---

## Problem Statement

<div class="header" bis_skin_checked="1"><div class="title" bis_skin_checked="1">C. Clock and Strings</div><div class="time-limit" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">time limit per test</div>1 second</div><div class="memory-limit" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">memory limit per test</div>256 megabytes</div><div class="input-file input-standard" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">input</div>standard input</div><div class="output-file output-standard" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">output</div>standard output</div></div><div bis_skin_checked="1"><p>There is a clock labeled with the numbers $$$1$$$ through $$$12$$$ in clockwise order, as shown below.</p><center> <img class="tex-graphics" src="https://espresso.codeforces.com/b8b6b4e6d43054edcd3b74127930ce9d45284500.png" style="zoom: 50.0%;max-width: 100.0%;max-height: 100.0%;"><p><span class="tex-font-size-small">In this example, $$$(a,b,c,d)=(2,9,10,6)$$$, and the strings intersect.</span> </p></center><p>Alice and Bob have four <span class="tex-font-style-bf">distinct</span> integers $$$a$$$, $$$b$$$, $$$c$$$, $$$d$$$ not more than $$$12$$$. Alice ties a red string connecting $$$a$$$ and $$$b$$$, and Bob ties a blue string connecting $$$c$$$ and $$$d$$$. Do the strings intersect? (The strings are straight line segments.)</p></div><div class="input-specification" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Input</div><p>The first line contains a single integer $$$t$$$ ($$$1 \leq t \leq 5940$$$) — the number of test cases.</p><p>The only line of each test case contains four <span class="tex-font-style-bf">distinct</span> integers $$$a$$$, $$$b$$$, $$$c$$$, $$$d$$$ ($$$1 \leq a, b, c, d \leq 12$$$).</p></div><div class="output-specification" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Output</div><p>For each test case, output "<span class="tex-font-style-tt">YES</span>" (without quotes) if the strings intersect, and "<span class="tex-font-style-tt">NO</span>" (without quotes) otherwise.</p><p>You can output "<span class="tex-font-style-tt">YES</span>" and "<span class="tex-font-style-tt">NO</span>" in any case (for example, strings "<span class="tex-font-style-tt">yEs</span>", "<span class="tex-font-style-tt">yes</span>", and "<span class="tex-font-style-tt">Yes</span>" will be recognized as a positive response).</p></div><div class="sample-tests" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Example</div><div class="sample-test" bis_skin_checked="1"><div class="input" bis_skin_checked="1"><div class="title" bis_skin_checked="1">Input<div title="Copy" data-clipboard-target="#id00141921217054356" id="id0034691631145048085" class="input-output-copier" bis_skin_checked="1">Copy</div></div><pre id="id00141921217054356"><div class="test-example-line test-example-line-even test-example-line-0" bis_skin_checked="1">15</div><div class="test-example-line test-example-line-odd test-example-line-1" bis_skin_checked="1">2 9 10 6</div><div class="test-example-line test-example-line-even test-example-line-2" bis_skin_checked="1">3 8 9 1</div><div class="test-example-line test-example-line-odd test-example-line-3" bis_skin_checked="1">1 2 3 4</div><div class="test-example-line test-example-line-even test-example-line-4" bis_skin_checked="1">5 3 4 12</div><div class="test-example-line test-example-line-odd test-example-line-5" bis_skin_checked="1">1 8 2 10</div><div class="test-example-line test-example-line-even test-example-line-6" bis_skin_checked="1">3 12 11 8</div><div class="test-example-line test-example-line-odd test-example-line-7" bis_skin_checked="1">9 10 12 1</div><div class="test-example-line test-example-line-even test-example-line-8" bis_skin_checked="1">12 1 10 2</div><div class="test-example-line test-example-line-odd test-example-line-9" bis_skin_checked="1">3 12 6 9</div><div class="test-example-line test-example-line-even test-example-line-10" bis_skin_checked="1">1 9 8 4</div><div class="test-example-line test-example-line-odd test-example-line-11" bis_skin_checked="1">6 7 9 12</div><div class="test-example-line test-example-line-even test-example-line-12" bis_skin_checked="1">7 12 9 6</div><div class="test-example-line test-example-line-odd test-example-line-13" bis_skin_checked="1">10 12 11 1</div><div class="test-example-line test-example-line-even test-example-line-14" bis_skin_checked="1">3 9 6 12</div><div class="test-example-line test-example-line-odd test-example-line-15" bis_skin_checked="1">1 4 3 5</div></pre></div><div class="output" bis_skin_checked="1"><div class="title" bis_skin_checked="1">Output<div title="Copy" data-clipboard-target="#id006305538487635923" id="id0010370263691675452" class="input-output-copier" bis_skin_checked="1">Copy</div></div><pre id="id006305538487635923">YES
NO
NO
YES
YES
NO
NO
NO
NO
NO
NO
YES
YES
YES
YES
</pre></div></div></div><div class="note" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Note</div><p>The first test case is pictured in the statement.</p><p>In the second test case, the strings do not intersect, as shown below. </p><center> <img class="tex-graphics" src="https://espresso.codeforces.com/f94e7279d16a01b885364554673fa05776fc6915.png" style="zoom: 50.0%;max-width: 100.0%;max-height: 100.0%;"> </center></div>