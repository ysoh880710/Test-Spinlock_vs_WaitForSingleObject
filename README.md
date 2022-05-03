# Test-Spinlock_vs_WaitForSingleObject

- Test Spinlock and WaitForSingleObject responsivity(interval between the time point when an event is set and the time point when processing begins in other threads).

## Environment

- Window 10 sdk 10.0.22000.0
- Visual Studio 2022 (v143)
- ISO c++14
- Unicode
- i7-10875h (8 core)

## Result

### 8 Threads

#### Spinlock

![1](Spinlock0.png)

- Trial 1 average interval : **0.000000775 nanosecond**

![2](Spinlock1.png)

- Trial 2 average interval : **0.000000825 nanosecond**

#### WaitForSingleObject

![3](WaitForSingleObject0.png)

- Trial 1 average interval : **0.000005125 nanosecond**

![4](WaitForSingleObject1.png)

- Trial 2 average interval : **0.000006738 nanosecond**

**In short,**

**- Spinlock is faster (has shorter interval) than WaitForSingleObject. (roughly takes 11.5% ~ 16.1% time of WaitForSingleObject)**

**- WaitForSingleObject is slower (has longer interval) than spinlock. (roughly takes 621% ~ 869% time of spinlock)**
