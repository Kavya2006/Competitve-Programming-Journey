<h2><a href="https://codeforces.com/contest/1354/problem/A" target="_blank" rel="noopener noreferrer">1354A — Alarm Clock</a></h2>

| | |
|---|---|
| **Difficulty** | 900 |
| **Language** | C++17 (GCC 7-32) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1354A](https://codeforces.com/contest/1354/problem/A) |

## Topics
`math`

---

## Problem Statement

<div class="header" bis_skin_checked="1"><div class="title" bis_skin_checked="1">A. Alarm Clock</div><div class="time-limit" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">time limit per test</div>2 seconds</div><div class="memory-limit" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">memory limit per test</div>256 megabytes</div><div class="input-file input-standard" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">input</div>standard input</div><div class="output-file output-standard" bis_skin_checked="1"><div class="property-title" bis_skin_checked="1">output</div>standard output</div></div><div bis_skin_checked="1"><p>Polycarp has spent the entire day preparing problems for you. Now he has to sleep for at least $$$a$$$ minutes to feel refreshed.</p><p><span class="tex-font-style-bf">Polycarp can only wake up by hearing the sound of his alarm.</span> So he has just fallen asleep and his first alarm goes off in $$$b$$$ minutes.</p><p>Every time Polycarp wakes up, he decides if he wants to sleep for some more time or not. If he's slept for less than $$$a$$$ minutes in total, then he sets his alarm to go off in $$$c$$$ minutes after it is reset and spends $$$d$$$ minutes to fall asleep again. Otherwise, he gets out of his bed and proceeds with the day.</p><p>If the alarm goes off while Polycarp is falling asleep, then he resets his alarm to go off in another $$$c$$$ minutes and tries to fall asleep for $$$d$$$ minutes again.</p><p>You just want to find out when will Polycarp get out of his bed or report that it will never happen.</p><p><span class="tex-font-style-bf">Please check out the notes for some explanations of the example.</span></p></div><div class="input-specification" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Input</div><p>The first line contains one integer $$$t$$$ ($$$1 \le t \le 1000$$$) — the number of testcases.</p><p>The only line of each testcase contains four integers $$$a, b, c, d$$$ ($$$1 \le a, b, c, d \le 10^9$$$) — the time Polycarp has to sleep for to feel refreshed, the time before the first alarm goes off, the time before every succeeding alarm goes off and the time Polycarp spends to fall asleep.</p></div><div class="output-specification" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Output</div><p>For each test case print one integer. If Polycarp never gets out of his bed then print <span class="tex-font-style-tt">-1</span>. Otherwise, print the time it takes for Polycarp to get out of his bed.</p></div><div class="sample-tests" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Example</div><div class="sample-test" bis_skin_checked="1"><div class="input" bis_skin_checked="1"><div class="title" bis_skin_checked="1">Input<div title="Copy" data-clipboard-target="#id0044865778932348177" id="id0042740927782945426" class="input-output-copier" bis_skin_checked="1">Copy</div></div><pre id="id0044865778932348177">7
10 3 6 4
11 3 6 4
5 9 4 10
6 5 2 3
1 1 1 1
3947465 47342 338129 123123
234123843 13 361451236 361451000
</pre></div><div class="output" bis_skin_checked="1"><div class="title" bis_skin_checked="1">Output<div title="Copy" data-clipboard-target="#id007389548440437098" id="id008826466047914816" class="input-output-copier" bis_skin_checked="1">Copy</div></div><pre id="id007389548440437098">27
27
9
-1
1
6471793
358578060125049
</pre></div></div></div><div class="note" bis_skin_checked="1"><div class="section-title" bis_skin_checked="1">Note</div><p>In the first testcase Polycarp wakes up after $$$3$$$ minutes. He only rested for $$$3$$$ minutes out of $$$10$$$ minutes he needed. So after that he sets his alarm to go off in $$$6$$$ minutes and spends $$$4$$$ minutes falling asleep. Thus, he rests for $$$2$$$ more minutes, totaling in $$$3+2=5$$$ minutes of sleep. Then he repeats the procedure three more times and ends up with $$$11$$$ minutes of sleep. Finally, he gets out of his bed. He spent $$$3$$$ minutes before the first alarm and then reset his alarm four times. The answer is $$$3+4 \cdot 6 = 27$$$.</p><p>The second example is almost like the first one but Polycarp needs $$$11$$$ minutes of sleep instead of $$$10$$$. However, that changes nothing because he gets $$$11$$$ minutes with these alarm parameters anyway.</p><p>In the third testcase Polycarp wakes up rested enough after the first alarm. Thus, the answer is $$$b=9$$$.</p><p>In the fourth testcase Polycarp wakes up after $$$5$$$ minutes. Unfortunately, he keeps resetting his alarm infinitely being unable to rest for even a single minute :(</p></div>