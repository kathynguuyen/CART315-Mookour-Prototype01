#include "pch-c.h"
#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include "codegen/il2cpp-codegen-metadata.h"





// 0x00000001 System.Exception System.Linq.Error::ArgumentNull(System.String)
extern void Error_ArgumentNull_m0EDA0D46D72CA692518E3E2EB75B48044D8FD41E (void);
// 0x00000002 System.Exception System.Linq.Error::MoreThanOneMatch()
extern void Error_MoreThanOneMatch_m4C4756AF34A76EF12F3B2B6D8C78DE547F0FBCF8 (void);
// 0x00000003 System.Exception System.Linq.Error::NoElements()
extern void Error_NoElements_mB89E91246572F009281D79730950808F17C3F353 (void);
// 0x00000004 System.Exception System.Linq.Error::NoMatch()
extern void Error_NoMatch_mA0FE78EC100066FA506B4C1C3AEC2E9E2DB79945 (void);
// 0x00000005 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Where(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000006 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Select(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TResult>)
// 0x00000007 System.Func`2<TSource,System.Boolean> System.Linq.Enumerable::CombinePredicates(System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,System.Boolean>)
// 0x00000008 System.Func`2<TSource,TResult> System.Linq.Enumerable::CombineSelectors(System.Func`2<TSource,TMiddle>,System.Func`2<TMiddle,TResult>)
// 0x00000009 System.Linq.IOrderedEnumerable`1<TSource> System.Linq.Enumerable::OrderBy(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TKey>)
// 0x0000000A System.Linq.IOrderedEnumerable`1<TSource> System.Linq.Enumerable::ThenBy(System.Linq.IOrderedEnumerable`1<TSource>,System.Func`2<TSource,TKey>)
// 0x0000000B TSource[] System.Linq.Enumerable::ToArray(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x0000000C System.Collections.Generic.List`1<TSource> System.Linq.Enumerable::ToList(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x0000000D TSource System.Linq.Enumerable::First(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x0000000E TSource System.Linq.Enumerable::First(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x0000000F TSource System.Linq.Enumerable::FirstOrDefault(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000010 TSource System.Linq.Enumerable::Last(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000011 TSource System.Linq.Enumerable::SingleOrDefault(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000012 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Empty()
// 0x00000013 System.Boolean System.Linq.Enumerable::Any(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000014 System.Boolean System.Linq.Enumerable::Any(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000015 System.Boolean System.Linq.Enumerable::All(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000016 System.Int32 System.Linq.Enumerable::Count(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000017 System.Boolean System.Linq.Enumerable::Contains(System.Collections.Generic.IEnumerable`1<TSource>,TSource)
// 0x00000018 System.Boolean System.Linq.Enumerable::Contains(System.Collections.Generic.IEnumerable`1<TSource>,TSource,System.Collections.Generic.IEqualityComparer`1<TSource>)
// 0x00000019 System.Void System.Linq.Enumerable/Iterator`1::.ctor()
// 0x0000001A TSource System.Linq.Enumerable/Iterator`1::get_Current()
// 0x0000001B System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/Iterator`1::Clone()
// 0x0000001C System.Void System.Linq.Enumerable/Iterator`1::Dispose()
// 0x0000001D System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/Iterator`1::GetEnumerator()
// 0x0000001E System.Boolean System.Linq.Enumerable/Iterator`1::MoveNext()
// 0x0000001F System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/Iterator`1::Select(System.Func`2<TSource,TResult>)
// 0x00000020 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/Iterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x00000021 System.Object System.Linq.Enumerable/Iterator`1::System.Collections.IEnumerator.get_Current()
// 0x00000022 System.Collections.IEnumerator System.Linq.Enumerable/Iterator`1::System.Collections.IEnumerable.GetEnumerator()
// 0x00000023 System.Void System.Linq.Enumerable/Iterator`1::System.Collections.IEnumerator.Reset()
// 0x00000024 System.Void System.Linq.Enumerable/WhereEnumerableIterator`1::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000025 System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::Clone()
// 0x00000026 System.Void System.Linq.Enumerable/WhereEnumerableIterator`1::Dispose()
// 0x00000027 System.Boolean System.Linq.Enumerable/WhereEnumerableIterator`1::MoveNext()
// 0x00000028 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereEnumerableIterator`1::Select(System.Func`2<TSource,TResult>)
// 0x00000029 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x0000002A System.Void System.Linq.Enumerable/WhereArrayIterator`1::.ctor(TSource[],System.Func`2<TSource,System.Boolean>)
// 0x0000002B System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereArrayIterator`1::Clone()
// 0x0000002C System.Boolean System.Linq.Enumerable/WhereArrayIterator`1::MoveNext()
// 0x0000002D System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereArrayIterator`1::Select(System.Func`2<TSource,TResult>)
// 0x0000002E System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereArrayIterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x0000002F System.Void System.Linq.Enumerable/WhereListIterator`1::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000030 System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereListIterator`1::Clone()
// 0x00000031 System.Boolean System.Linq.Enumerable/WhereListIterator`1::MoveNext()
// 0x00000032 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereListIterator`1::Select(System.Func`2<TSource,TResult>)
// 0x00000033 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereListIterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x00000034 System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
// 0x00000035 System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Clone()
// 0x00000036 System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Dispose()
// 0x00000037 System.Boolean System.Linq.Enumerable/WhereSelectEnumerableIterator`2::MoveNext()
// 0x00000038 System.Collections.Generic.IEnumerable`1<TResult2> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Select(System.Func`2<TResult,TResult2>)
// 0x00000039 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Where(System.Func`2<TResult,System.Boolean>)
// 0x0000003A System.Void System.Linq.Enumerable/WhereSelectArrayIterator`2::.ctor(TSource[],System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
// 0x0000003B System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2::Clone()
// 0x0000003C System.Boolean System.Linq.Enumerable/WhereSelectArrayIterator`2::MoveNext()
// 0x0000003D System.Collections.Generic.IEnumerable`1<TResult2> System.Linq.Enumerable/WhereSelectArrayIterator`2::Select(System.Func`2<TResult,TResult2>)
// 0x0000003E System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2::Where(System.Func`2<TResult,System.Boolean>)
// 0x0000003F System.Void System.Linq.Enumerable/WhereSelectListIterator`2::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
// 0x00000040 System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2::Clone()
// 0x00000041 System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2::MoveNext()
// 0x00000042 System.Collections.Generic.IEnumerable`1<TResult2> System.Linq.Enumerable/WhereSelectListIterator`2::Select(System.Func`2<TResult,TResult2>)
// 0x00000043 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2::Where(System.Func`2<TResult,System.Boolean>)
// 0x00000044 System.Void System.Linq.Enumerable/<>c__DisplayClass6_0`1::.ctor()
// 0x00000045 System.Boolean System.Linq.Enumerable/<>c__DisplayClass6_0`1::<CombinePredicates>b__0(TSource)
// 0x00000046 System.Void System.Linq.Enumerable/<>c__DisplayClass7_0`3::.ctor()
// 0x00000047 TResult System.Linq.Enumerable/<>c__DisplayClass7_0`3::<CombineSelectors>b__0(TSource)
// 0x00000048 System.Void System.Linq.EmptyEnumerable`1::.cctor()
// 0x00000049 System.Linq.IOrderedEnumerable`1<TElement> System.Linq.IOrderedEnumerable`1::CreateOrderedEnumerable(System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Boolean)
// 0x0000004A System.Collections.Generic.IEnumerator`1<TElement> System.Linq.OrderedEnumerable`1::GetEnumerator()
// 0x0000004B System.Linq.EnumerableSorter`1<TElement> System.Linq.OrderedEnumerable`1::GetEnumerableSorter(System.Linq.EnumerableSorter`1<TElement>)
// 0x0000004C System.Collections.IEnumerator System.Linq.OrderedEnumerable`1::System.Collections.IEnumerable.GetEnumerator()
// 0x0000004D System.Linq.IOrderedEnumerable`1<TElement> System.Linq.OrderedEnumerable`1::System.Linq.IOrderedEnumerable<TElement>.CreateOrderedEnumerable(System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Boolean)
// 0x0000004E System.Void System.Linq.OrderedEnumerable`1::.ctor()
// 0x0000004F System.Void System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::.ctor(System.Int32)
// 0x00000050 System.Void System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::System.IDisposable.Dispose()
// 0x00000051 System.Boolean System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::MoveNext()
// 0x00000052 TElement System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::System.Collections.Generic.IEnumerator<TElement>.get_Current()
// 0x00000053 System.Void System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::System.Collections.IEnumerator.Reset()
// 0x00000054 System.Object System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::System.Collections.IEnumerator.get_Current()
// 0x00000055 System.Void System.Linq.OrderedEnumerable`2::.ctor(System.Collections.Generic.IEnumerable`1<TElement>,System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Boolean)
// 0x00000056 System.Linq.EnumerableSorter`1<TElement> System.Linq.OrderedEnumerable`2::GetEnumerableSorter(System.Linq.EnumerableSorter`1<TElement>)
// 0x00000057 System.Void System.Linq.EnumerableSorter`1::ComputeKeys(TElement[],System.Int32)
// 0x00000058 System.Int32 System.Linq.EnumerableSorter`1::CompareKeys(System.Int32,System.Int32)
// 0x00000059 System.Int32[] System.Linq.EnumerableSorter`1::Sort(TElement[],System.Int32)
// 0x0000005A System.Void System.Linq.EnumerableSorter`1::QuickSort(System.Int32[],System.Int32,System.Int32)
// 0x0000005B System.Void System.Linq.EnumerableSorter`1::.ctor()
// 0x0000005C System.Void System.Linq.EnumerableSorter`2::.ctor(System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Boolean,System.Linq.EnumerableSorter`1<TElement>)
// 0x0000005D System.Void System.Linq.EnumerableSorter`2::ComputeKeys(TElement[],System.Int32)
// 0x0000005E System.Int32 System.Linq.EnumerableSorter`2::CompareKeys(System.Int32,System.Int32)
// 0x0000005F System.Void System.Linq.Buffer`1::.ctor(System.Collections.Generic.IEnumerable`1<TElement>)
// 0x00000060 TElement[] System.Linq.Buffer`1::ToArray()
// 0x00000061 System.Void System.Collections.Generic.HashSet`1::.ctor()
// 0x00000062 System.Void System.Collections.Generic.HashSet`1::.ctor(System.Collections.Generic.IEqualityComparer`1<T>)
// 0x00000063 System.Void System.Collections.Generic.HashSet`1::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
// 0x00000064 System.Void System.Collections.Generic.HashSet`1::System.Collections.Generic.ICollection<T>.Add(T)
// 0x00000065 System.Void System.Collections.Generic.HashSet`1::Clear()
// 0x00000066 System.Boolean System.Collections.Generic.HashSet`1::Contains(T)
// 0x00000067 System.Void System.Collections.Generic.HashSet`1::CopyTo(T[],System.Int32)
// 0x00000068 System.Boolean System.Collections.Generic.HashSet`1::Remove(T)
// 0x00000069 System.Int32 System.Collections.Generic.HashSet`1::get_Count()
// 0x0000006A System.Boolean System.Collections.Generic.HashSet`1::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
// 0x0000006B System.Collections.Generic.HashSet`1/Enumerator<T> System.Collections.Generic.HashSet`1::GetEnumerator()
// 0x0000006C System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.HashSet`1::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
// 0x0000006D System.Collections.IEnumerator System.Collections.Generic.HashSet`1::System.Collections.IEnumerable.GetEnumerator()
// 0x0000006E System.Void System.Collections.Generic.HashSet`1::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
// 0x0000006F System.Void System.Collections.Generic.HashSet`1::OnDeserialization(System.Object)
// 0x00000070 System.Boolean System.Collections.Generic.HashSet`1::Add(T)
// 0x00000071 System.Void System.Collections.Generic.HashSet`1::CopyTo(T[])
// 0x00000072 System.Void System.Collections.Generic.HashSet`1::CopyTo(T[],System.Int32,System.Int32)
// 0x00000073 System.Void System.Collections.Generic.HashSet`1::Initialize(System.Int32)
// 0x00000074 System.Void System.Collections.Generic.HashSet`1::IncreaseCapacity()
// 0x00000075 System.Void System.Collections.Generic.HashSet`1::SetCapacity(System.Int32)
// 0x00000076 System.Boolean System.Collections.Generic.HashSet`1::AddIfNotPresent(T)
// 0x00000077 System.Int32 System.Collections.Generic.HashSet`1::InternalGetHashCode(T)
// 0x00000078 System.Void System.Collections.Generic.HashSet`1/Enumerator::.ctor(System.Collections.Generic.HashSet`1<T>)
// 0x00000079 System.Void System.Collections.Generic.HashSet`1/Enumerator::Dispose()
// 0x0000007A System.Boolean System.Collections.Generic.HashSet`1/Enumerator::MoveNext()
// 0x0000007B T System.Collections.Generic.HashSet`1/Enumerator::get_Current()
// 0x0000007C System.Object System.Collections.Generic.HashSet`1/Enumerator::System.Collections.IEnumerator.get_Current()
// 0x0000007D System.Void System.Collections.Generic.HashSet`1/Enumerator::System.Collections.IEnumerator.Reset()
static Il2CppMethodPointer s_methodPointers[125] = 
{
	Error_ArgumentNull_m0EDA0D46D72CA692518E3E2EB75B48044D8FD41E,
	Error_MoreThanOneMatch_m4C4756AF34A76EF12F3B2B6D8C78DE547F0FBCF8,
	Error_NoElements_mB89E91246572F009281D79730950808F17C3F353,
	Error_NoMatch_mA0FE78EC100066FA506B4C1C3AEC2E9E2DB79945,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
};
static const int32_t s_InvokerIndices[125] = 
{
	4232,
	4418,
	4418,
	4418,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
};
static const Il2CppTokenRangePair s_rgctxIndices[45] = 
{
	{ 0x02000004, { 73, 4 } },
	{ 0x02000005, { 77, 9 } },
	{ 0x02000006, { 88, 7 } },
	{ 0x02000007, { 97, 10 } },
	{ 0x02000008, { 109, 11 } },
	{ 0x02000009, { 123, 9 } },
	{ 0x0200000A, { 135, 12 } },
	{ 0x0200000B, { 150, 1 } },
	{ 0x0200000C, { 151, 2 } },
	{ 0x0200000D, { 153, 2 } },
	{ 0x0200000F, { 155, 3 } },
	{ 0x02000010, { 160, 5 } },
	{ 0x02000011, { 165, 7 } },
	{ 0x02000012, { 172, 3 } },
	{ 0x02000013, { 175, 7 } },
	{ 0x02000014, { 182, 4 } },
	{ 0x02000015, { 186, 21 } },
	{ 0x02000017, { 207, 2 } },
	{ 0x06000005, { 0, 10 } },
	{ 0x06000006, { 10, 10 } },
	{ 0x06000007, { 20, 5 } },
	{ 0x06000008, { 25, 5 } },
	{ 0x06000009, { 30, 2 } },
	{ 0x0600000A, { 32, 1 } },
	{ 0x0600000B, { 33, 3 } },
	{ 0x0600000C, { 36, 2 } },
	{ 0x0600000D, { 38, 4 } },
	{ 0x0600000E, { 42, 3 } },
	{ 0x0600000F, { 45, 4 } },
	{ 0x06000010, { 49, 4 } },
	{ 0x06000011, { 53, 3 } },
	{ 0x06000012, { 56, 1 } },
	{ 0x06000013, { 57, 1 } },
	{ 0x06000014, { 58, 3 } },
	{ 0x06000015, { 61, 3 } },
	{ 0x06000016, { 64, 2 } },
	{ 0x06000017, { 66, 2 } },
	{ 0x06000018, { 68, 5 } },
	{ 0x06000028, { 86, 2 } },
	{ 0x0600002D, { 95, 2 } },
	{ 0x06000032, { 107, 2 } },
	{ 0x06000038, { 120, 3 } },
	{ 0x0600003D, { 132, 3 } },
	{ 0x06000042, { 147, 3 } },
	{ 0x0600004D, { 158, 2 } },
};
static const Il2CppRGCTXDefinition s_rgctxValues[209] = 
{
	{ (Il2CppRGCTXDataType)2, 2106 },
	{ (Il2CppRGCTXDataType)3, 8579 },
	{ (Il2CppRGCTXDataType)2, 3353 },
	{ (Il2CppRGCTXDataType)2, 2854 },
	{ (Il2CppRGCTXDataType)3, 14688 },
	{ (Il2CppRGCTXDataType)2, 2199 },
	{ (Il2CppRGCTXDataType)2, 2861 },
	{ (Il2CppRGCTXDataType)3, 14723 },
	{ (Il2CppRGCTXDataType)2, 2856 },
	{ (Il2CppRGCTXDataType)3, 14700 },
	{ (Il2CppRGCTXDataType)2, 2107 },
	{ (Il2CppRGCTXDataType)3, 8580 },
	{ (Il2CppRGCTXDataType)2, 3385 },
	{ (Il2CppRGCTXDataType)2, 2866 },
	{ (Il2CppRGCTXDataType)3, 14738 },
	{ (Il2CppRGCTXDataType)2, 2216 },
	{ (Il2CppRGCTXDataType)2, 2874 },
	{ (Il2CppRGCTXDataType)3, 14902 },
	{ (Il2CppRGCTXDataType)2, 2870 },
	{ (Il2CppRGCTXDataType)3, 14813 },
	{ (Il2CppRGCTXDataType)2, 743 },
	{ (Il2CppRGCTXDataType)3, 36 },
	{ (Il2CppRGCTXDataType)3, 37 },
	{ (Il2CppRGCTXDataType)2, 1277 },
	{ (Il2CppRGCTXDataType)3, 5857 },
	{ (Il2CppRGCTXDataType)2, 745 },
	{ (Il2CppRGCTXDataType)3, 48 },
	{ (Il2CppRGCTXDataType)3, 49 },
	{ (Il2CppRGCTXDataType)2, 1290 },
	{ (Il2CppRGCTXDataType)3, 5863 },
	{ (Il2CppRGCTXDataType)2, 2579 },
	{ (Il2CppRGCTXDataType)3, 13181 },
	{ (Il2CppRGCTXDataType)3, 6513 },
	{ (Il2CppRGCTXDataType)2, 866 },
	{ (Il2CppRGCTXDataType)3, 971 },
	{ (Il2CppRGCTXDataType)3, 972 },
	{ (Il2CppRGCTXDataType)2, 2200 },
	{ (Il2CppRGCTXDataType)3, 9198 },
	{ (Il2CppRGCTXDataType)2, 1881 },
	{ (Il2CppRGCTXDataType)2, 1449 },
	{ (Il2CppRGCTXDataType)2, 1553 },
	{ (Il2CppRGCTXDataType)2, 1662 },
	{ (Il2CppRGCTXDataType)2, 1554 },
	{ (Il2CppRGCTXDataType)2, 1663 },
	{ (Il2CppRGCTXDataType)3, 5858 },
	{ (Il2CppRGCTXDataType)2, 1882 },
	{ (Il2CppRGCTXDataType)2, 1450 },
	{ (Il2CppRGCTXDataType)2, 1555 },
	{ (Il2CppRGCTXDataType)2, 1664 },
	{ (Il2CppRGCTXDataType)2, 1883 },
	{ (Il2CppRGCTXDataType)2, 1451 },
	{ (Il2CppRGCTXDataType)2, 1556 },
	{ (Il2CppRGCTXDataType)2, 1665 },
	{ (Il2CppRGCTXDataType)2, 1557 },
	{ (Il2CppRGCTXDataType)2, 1666 },
	{ (Il2CppRGCTXDataType)3, 5859 },
	{ (Il2CppRGCTXDataType)2, 1117 },
	{ (Il2CppRGCTXDataType)2, 1545 },
	{ (Il2CppRGCTXDataType)2, 1546 },
	{ (Il2CppRGCTXDataType)2, 1660 },
	{ (Il2CppRGCTXDataType)3, 5856 },
	{ (Il2CppRGCTXDataType)2, 1544 },
	{ (Il2CppRGCTXDataType)2, 1659 },
	{ (Il2CppRGCTXDataType)3, 5855 },
	{ (Il2CppRGCTXDataType)2, 1448 },
	{ (Il2CppRGCTXDataType)2, 1552 },
	{ (Il2CppRGCTXDataType)2, 1447 },
	{ (Il2CppRGCTXDataType)3, 17830 },
	{ (Il2CppRGCTXDataType)3, 5212 },
	{ (Il2CppRGCTXDataType)2, 1182 },
	{ (Il2CppRGCTXDataType)2, 1548 },
	{ (Il2CppRGCTXDataType)2, 1661 },
	{ (Il2CppRGCTXDataType)2, 1759 },
	{ (Il2CppRGCTXDataType)3, 8581 },
	{ (Il2CppRGCTXDataType)3, 8583 },
	{ (Il2CppRGCTXDataType)2, 553 },
	{ (Il2CppRGCTXDataType)3, 8582 },
	{ (Il2CppRGCTXDataType)3, 8591 },
	{ (Il2CppRGCTXDataType)2, 2110 },
	{ (Il2CppRGCTXDataType)2, 2857 },
	{ (Il2CppRGCTXDataType)3, 14701 },
	{ (Il2CppRGCTXDataType)3, 8592 },
	{ (Il2CppRGCTXDataType)2, 1599 },
	{ (Il2CppRGCTXDataType)2, 1693 },
	{ (Il2CppRGCTXDataType)3, 5870 },
	{ (Il2CppRGCTXDataType)3, 17796 },
	{ (Il2CppRGCTXDataType)2, 2871 },
	{ (Il2CppRGCTXDataType)3, 14814 },
	{ (Il2CppRGCTXDataType)3, 8584 },
	{ (Il2CppRGCTXDataType)2, 2109 },
	{ (Il2CppRGCTXDataType)2, 2855 },
	{ (Il2CppRGCTXDataType)3, 14689 },
	{ (Il2CppRGCTXDataType)3, 5869 },
	{ (Il2CppRGCTXDataType)3, 8585 },
	{ (Il2CppRGCTXDataType)3, 17795 },
	{ (Il2CppRGCTXDataType)2, 2867 },
	{ (Il2CppRGCTXDataType)3, 14739 },
	{ (Il2CppRGCTXDataType)3, 8598 },
	{ (Il2CppRGCTXDataType)2, 2111 },
	{ (Il2CppRGCTXDataType)2, 2862 },
	{ (Il2CppRGCTXDataType)3, 14724 },
	{ (Il2CppRGCTXDataType)3, 9241 },
	{ (Il2CppRGCTXDataType)3, 4096 },
	{ (Il2CppRGCTXDataType)3, 5871 },
	{ (Il2CppRGCTXDataType)3, 4095 },
	{ (Il2CppRGCTXDataType)3, 8599 },
	{ (Il2CppRGCTXDataType)3, 17797 },
	{ (Il2CppRGCTXDataType)2, 2875 },
	{ (Il2CppRGCTXDataType)3, 14903 },
	{ (Il2CppRGCTXDataType)3, 8612 },
	{ (Il2CppRGCTXDataType)2, 2113 },
	{ (Il2CppRGCTXDataType)2, 2873 },
	{ (Il2CppRGCTXDataType)3, 14816 },
	{ (Il2CppRGCTXDataType)3, 8613 },
	{ (Il2CppRGCTXDataType)2, 1602 },
	{ (Il2CppRGCTXDataType)2, 1696 },
	{ (Il2CppRGCTXDataType)3, 5875 },
	{ (Il2CppRGCTXDataType)3, 5874 },
	{ (Il2CppRGCTXDataType)2, 2859 },
	{ (Il2CppRGCTXDataType)3, 14703 },
	{ (Il2CppRGCTXDataType)3, 17802 },
	{ (Il2CppRGCTXDataType)2, 2872 },
	{ (Il2CppRGCTXDataType)3, 14815 },
	{ (Il2CppRGCTXDataType)3, 8605 },
	{ (Il2CppRGCTXDataType)2, 2112 },
	{ (Il2CppRGCTXDataType)2, 2869 },
	{ (Il2CppRGCTXDataType)3, 14741 },
	{ (Il2CppRGCTXDataType)3, 5873 },
	{ (Il2CppRGCTXDataType)3, 5872 },
	{ (Il2CppRGCTXDataType)3, 8606 },
	{ (Il2CppRGCTXDataType)2, 2858 },
	{ (Il2CppRGCTXDataType)3, 14702 },
	{ (Il2CppRGCTXDataType)3, 17801 },
	{ (Il2CppRGCTXDataType)2, 2868 },
	{ (Il2CppRGCTXDataType)3, 14740 },
	{ (Il2CppRGCTXDataType)3, 8619 },
	{ (Il2CppRGCTXDataType)2, 2114 },
	{ (Il2CppRGCTXDataType)2, 2877 },
	{ (Il2CppRGCTXDataType)3, 14905 },
	{ (Il2CppRGCTXDataType)3, 9242 },
	{ (Il2CppRGCTXDataType)3, 4098 },
	{ (Il2CppRGCTXDataType)3, 5877 },
	{ (Il2CppRGCTXDataType)3, 5876 },
	{ (Il2CppRGCTXDataType)3, 4097 },
	{ (Il2CppRGCTXDataType)3, 8620 },
	{ (Il2CppRGCTXDataType)2, 2860 },
	{ (Il2CppRGCTXDataType)3, 14704 },
	{ (Il2CppRGCTXDataType)3, 17803 },
	{ (Il2CppRGCTXDataType)2, 2876 },
	{ (Il2CppRGCTXDataType)3, 14904 },
	{ (Il2CppRGCTXDataType)3, 5867 },
	{ (Il2CppRGCTXDataType)3, 5868 },
	{ (Il2CppRGCTXDataType)3, 5881 },
	{ (Il2CppRGCTXDataType)2, 3392 },
	{ (Il2CppRGCTXDataType)2, 1118 },
	{ (Il2CppRGCTXDataType)2, 748 },
	{ (Il2CppRGCTXDataType)3, 106 },
	{ (Il2CppRGCTXDataType)3, 13168 },
	{ (Il2CppRGCTXDataType)2, 2580 },
	{ (Il2CppRGCTXDataType)3, 13182 },
	{ (Il2CppRGCTXDataType)2, 867 },
	{ (Il2CppRGCTXDataType)3, 973 },
	{ (Il2CppRGCTXDataType)3, 13174 },
	{ (Il2CppRGCTXDataType)3, 4073 },
	{ (Il2CppRGCTXDataType)2, 582 },
	{ (Il2CppRGCTXDataType)3, 13169 },
	{ (Il2CppRGCTXDataType)2, 2576 },
	{ (Il2CppRGCTXDataType)3, 1084 },
	{ (Il2CppRGCTXDataType)2, 901 },
	{ (Il2CppRGCTXDataType)2, 1151 },
	{ (Il2CppRGCTXDataType)3, 4079 },
	{ (Il2CppRGCTXDataType)3, 13170 },
	{ (Il2CppRGCTXDataType)3, 4068 },
	{ (Il2CppRGCTXDataType)3, 4069 },
	{ (Il2CppRGCTXDataType)3, 4067 },
	{ (Il2CppRGCTXDataType)3, 4070 },
	{ (Il2CppRGCTXDataType)2, 1147 },
	{ (Il2CppRGCTXDataType)2, 3439 },
	{ (Il2CppRGCTXDataType)3, 5865 },
	{ (Il2CppRGCTXDataType)3, 4072 },
	{ (Il2CppRGCTXDataType)2, 1527 },
	{ (Il2CppRGCTXDataType)3, 4071 },
	{ (Il2CppRGCTXDataType)2, 1453 },
	{ (Il2CppRGCTXDataType)2, 3388 },
	{ (Il2CppRGCTXDataType)2, 1573 },
	{ (Il2CppRGCTXDataType)2, 1671 },
	{ (Il2CppRGCTXDataType)3, 5230 },
	{ (Il2CppRGCTXDataType)2, 1191 },
	{ (Il2CppRGCTXDataType)3, 6349 },
	{ (Il2CppRGCTXDataType)3, 6350 },
	{ (Il2CppRGCTXDataType)3, 6355 },
	{ (Il2CppRGCTXDataType)2, 1767 },
	{ (Il2CppRGCTXDataType)3, 6352 },
	{ (Il2CppRGCTXDataType)3, 18490 },
	{ (Il2CppRGCTXDataType)2, 1152 },
	{ (Il2CppRGCTXDataType)3, 4086 },
	{ (Il2CppRGCTXDataType)1, 1522 },
	{ (Il2CppRGCTXDataType)2, 3400 },
	{ (Il2CppRGCTXDataType)3, 6351 },
	{ (Il2CppRGCTXDataType)1, 3400 },
	{ (Il2CppRGCTXDataType)1, 1767 },
	{ (Il2CppRGCTXDataType)2, 3455 },
	{ (Il2CppRGCTXDataType)2, 3400 },
	{ (Il2CppRGCTXDataType)3, 6356 },
	{ (Il2CppRGCTXDataType)3, 6354 },
	{ (Il2CppRGCTXDataType)3, 6353 },
	{ (Il2CppRGCTXDataType)2, 437 },
	{ (Il2CppRGCTXDataType)3, 4099 },
	{ (Il2CppRGCTXDataType)2, 562 },
};
extern const CustomAttributesCacheGenerator g_System_Core_AttributeGenerators[];
IL2CPP_EXTERN_C const Il2CppCodeGenModule g_System_Core_CodeGenModule;
const Il2CppCodeGenModule g_System_Core_CodeGenModule = 
{
	"System.Core.dll",
	125,
	s_methodPointers,
	0,
	NULL,
	s_InvokerIndices,
	0,
	NULL,
	45,
	s_rgctxIndices,
	209,
	s_rgctxValues,
	NULL,
	g_System_Core_AttributeGenerators,
	NULL, // module initializer,
	NULL,
	NULL,
	NULL,
};
