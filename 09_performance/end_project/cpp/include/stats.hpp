#pragma once
struct AllocationStats {
  size_t totalAllocated;
  size_t totalFreed;
  size_t peakUsage;
  size_t allocationCount;
};
