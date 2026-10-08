<h2><a href="https://codeforces.com/contest/2275/problem/A" target="_blank" rel="noopener noreferrer">2275A — In Search of Convenience</a></h2>

| | |
|---|---|
| **Difficulty** | Unrated |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 2275A](https://codeforces.com/contest/2275/problem/A) |

## Topics
`geometry` `implementation`

---

## Problem Statement

<div class="header" bis_skin_checked="1"><div class="title" bis_skin_checked="1">A. In Search of Convenience</div><div class="time-limit" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">time limit per test</div>1 second</div><div class="memory-limit" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">memory limit per test</div>256 megabytes</div><div class="input-file input-standard" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">input</div>standard input</div><div class="output-file output-standard" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">output</div>standard output</div></div><div bis_skin_checked="1"><p>K1o0n got a router and placed it at point $$$(x_0, y_0)$$$; we will consider the apartment layout as a coordinate plane, and the floor is tiled, so the furniture can stand only at lattice points with integer coordinates.</p><p>The internet spreads exactly $$$R$$$ meters around the router. K1o0n wants to move his computer as far away from it as possible — but still so that the internet is available. Therefore, the desk with the computer must be placed exactly on the reception boundary, at a distance of $$$R$$$ from the router. For example, if the router is at point $$$(5, 5)$$$ and $$$R = 5$$$, then the desk can be placed at point $$$(2,1)$$$, because $$$(5 - 2)^2 + (5 - 1)^2 = 5^2$$$.</p><p>Find any point with integer coordinates that is exactly $$$R$$$ away from $$$(x_0, y_0)$$$.</p><p>Recall that the distance from the point $$$(x_0, y_0)$$$ to the point $$$(x, y)$$$ is $$$\sqrt{(x_0 - x)^2 + (y_0 - y)^2}$$$.</p></div><div class="input-specification" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Input</div><p>The first line contains an integer $$$t$$$ ($$$1 \le t \le 10^4$$$) — the number of testcases.</p><p>The only line of each testcase contains three integers $$$x_0$$$, $$$y_0$$$, and $$$R$$$ ($$$-10 \le x_0, y_0 \le 10$$$, $$$1 \le R \le 25$$$) — the coordinates of the router and the coverage radius.</p></div><div class="output-specification" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Output</div><p>For each testcase, output two integers $$$x$$$ and $$$y$$$ — the coordinates of the desk.</p><p>If there are several suitable points, output any of them.</p></div><div class="sample-tests" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Example</div><div class="sample-test" bis_skin_checked="1"><div class="input" bis_skin_checked="1"><div class="title" bis_skin_checked="1">Input<div title="Copy" data-clipboard-target="#id0041311874510100044" id="id005569554920268989" class="input-output-copier" bis_skin_checked="1">Copy</div></div><pre id="id0041311874510100044">3
0 0 1
5 5 5
10 10 13
</pre></div><div class="output" bis_skin_checked="1"><div class="title" bis_skin_checked="1">Output<div title="Copy" data-clipboard-target="#id008512088447773279" id="id0024895533348398957" class="input-output-copier" bis_skin_checked="1">Copy</div></div><pre id="id008512088447773279">0 1
2 1
-2 5</pre></div></div></div>