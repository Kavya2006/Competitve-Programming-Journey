<h2><a href="https://codeforces.com/contest/1411/problem/A" target="_blank" rel="noopener noreferrer">1411A — In-game Chat</a></h2>

| | |
|---|---|
| **Difficulty** | 800 |
| **Language** | C++17 (GCC 7-32) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1411A](https://codeforces.com/contest/1411/problem/A) |

## Topics
`implementation`

---

## Problem Statement

<div class="header" bis_skin_checked="1"><div class="title" bis_skin_checked="1">A. In-game Chat</div><div class="time-limit" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">time limit per test</div>1 second</div><div class="memory-limit" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">memory limit per test</div>256 megabytes</div><div class="input-file input-standard" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">input</div>standard input</div><div class="output-file output-standard" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">output</div>standard output</div></div><div bis_skin_checked="1"><p>You have been assigned to develop a filter for bad messages in the in-game chat. A message is a string $$$S$$$ of length $$$n$$$, consisting of lowercase English letters and characters '<span class="tex-font-style-tt">)</span>'. The message is <span class="tex-font-style-it">bad</span> if the number of characters '<span class="tex-font-style-tt">)</span>' at the end of the string strictly greater than the number of remaining characters. For example, the string "<span class="tex-font-style-tt">)bc)))</span>" has three parentheses at the end, three remaining characters, and is not considered bad.</p></div><div class="input-specification" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Input</div><p>The first line contains the number of test cases $$$t$$$ ($$$1 \leq t \leq 100$$$). Description of the $$$t$$$ test cases follows.</p><p>The first line of each test case contains an integer $$$n$$$ ($$$1 \leq n \leq 100$$$). The second line of each test case contains a string $$$S$$$ of length $$$n$$$, consisting of lowercase English letters and characters '<span class="tex-font-style-tt">)</span>'.</p></div><div class="output-specification" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Output</div><p>For each of $$$t$$$ test cases, print "<span class="tex-font-style-tt">Yes</span>" if the string is bad. Otherwise, print "<span class="tex-font-style-tt">No</span>".</p><p>You can print each letter in any case (upper or lower).</p></div><div class="sample-tests" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Example</div><div class="sample-test" bis_skin_checked="1"><div class="input" bis_skin_checked="1"><div class="title" bis_skin_checked="1">Input<div title="Copy" data-clipboard-target="#id006870613188496043" id="id006270802714857596" class="input-output-copier" bis_skin_checked="1">Copy</div></div><pre id="id006870613188496043">5
2
))
12
gl))hf))))))
9
gege)))))
14
)aa))b))))))))
1
)
</pre></div><div class="output" bis_skin_checked="1"><div class="title" bis_skin_checked="1">Output<div title="Copy" data-clipboard-target="#id0011008046136923866" id="id008072248176290174" class="input-output-copier" bis_skin_checked="1">Copy</div></div><pre id="id0011008046136923866">Yes
No
Yes
Yes
Yes
</pre></div></div></div>