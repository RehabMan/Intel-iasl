#pragma once

#include <lib/spinlock.h>
#include <lib/semaphore.h>
#include <stdint.h>

/* 7.3 Configurable Data Types */
#define ACPI_SPINLOCK			spinlock_t
#define ACPI_SEMAPHORE			semaphore_t
#define ACPI_MUTEX			(ACPI_MUTEX_TYPE)
// #define ACPI_CPU_FLAGS
#define ACPI_THREAD_ID			uint64_t
#define ACPI_CACHE_T			ACPI_MEMORY_LIST
#define ACPI_UINTPTR_T			uintptr_t

/* 7.4 Subsystem Compile time options */
#define ACPI_USE_SYSTEM_CLIBRARY
// #define ACPI_USE_STANDARD_HEADERS
// #define ACPI_DEBUG_OUTPUT
#define ACPI_USE_LOCAL_CACHE		(1)
// #define ACPI_DBG_TRACK_ALLOCATIONS
#define ACPI_MUTEX_TYPE			ACPI_BINARY_SEMAPHORE


/* ... I got bored, so here is just the required options ... */
#define ACPI_MACHINE_WIDTH		(64)
#define ACPI_OS_NAME			"ACOS"
#define ACPI_SINGLE_THREADED


// typedef UINT32 (*ACPI_OSD_HANDLER) (void* );

