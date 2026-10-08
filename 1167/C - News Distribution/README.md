<h2><a href="https://codeforces.com/contest/1167/problem/C" target="_blank" rel="noopener noreferrer">1167C — News Distribution</a></h2>

| | |
|---|---|
| **Difficulty** | 1400 |
| **Language** | C++17 (GCC 7-32) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1167C](https://codeforces.com/contest/1167/problem/C) |

## Topics
`dfs and similar` `dsu` `graphs`

---

## Problem Statement

<div class="header" bis_skin_checked="1"><div class="title" bis_skin_checked="1">C. News Distribution</div><div class="time-limit" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">time limit per test</div>2 seconds</div><div class="memory-limit" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">memory limit per test</div>256 megabytes</div><div class="input-file input-standard" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">input</div>standard input</div><div class="output-file output-standard" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">output</div>standard output</div></div><div bis_skin_checked="1"><p>In some social network, there are $$$n$$$ users communicating with each other in $$$m$$$ groups of friends. Let's analyze the process of distributing some news between users.</p><p>Initially, some user $$$x$$$ receives the news from some source. Then he or she sends the news to his or her friends (two users are friends if there is at least one group such that both of them belong to this group). Friends continue sending the news to their friends, and so on. The process ends when there is no pair of friends such that one of them knows the news, and another one doesn't know.</p><p>For each user $$$x$$$ you have to determine what is the number of users that will know the news if initially only user $$$x$$$ starts distributing it. </p></div><div class="input-specification" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Input</div><p>The first line contains two integers $$$n$$$ and $$$m$$$ ($$$1 \le n, m \le 5 \cdot 10^5$$$) — the number of users and the number of groups of friends, respectively.</p><p>Then $$$m$$$ lines follow, each describing a group of friends. The $$$i$$$-th line begins with integer $$$k_i$$$ ($$$0 \le k_i \le n$$$) — the number of users in the $$$i$$$-th group. Then $$$k_i$$$ <span class="tex-font-style-bf">distinct</span> integers follow, denoting the users belonging to the $$$i$$$-th group.</p><p>It is guaranteed that $$$\sum \limits_{i = 1}^{m} k_i \le 5 \cdot 10^5$$$.</p></div><div class="output-specification" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Output</div><p>Print $$$n$$$ integers. The $$$i$$$-th integer should be equal to the number of users that will know the news if user $$$i$$$ starts distributing it.</p></div><div class="sample-tests" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Example</div><div class="sample-test" bis_skin_checked="1"><div class="input" bis_skin_checked="1"><div class="title" bis_skin_checked="1">Input<div title="Copy" data-clipboard-target="#id0020084928507353428" id="id0045315172420127914" class="input-output-copier" bis_skin_checked="1">Copy</div></div><pre id="id0020084928507353428">7 5
3 2 5 4
0
2 1 2
1 1
2 6 7
</pre></div><div class="output" bis_skin_checked="1"><div class="title" bis_skin_checked="1">Output<div title="Copy" data-clipboard-target="#id003015001621467355" id="id00027445587740628663" class="input-output-copier" bis_skin_checked="1">Copy</div></div><pre id="id003015001621467355">4 4 1 4 4 2 2 </pre></div></div></div>