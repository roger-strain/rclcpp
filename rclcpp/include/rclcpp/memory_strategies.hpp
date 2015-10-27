// Copyright 2015 Open Source Robotics Foundation, Inc.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#ifndef RCLCPP_RCLCPP_MEMORY_STRATEGIES_HPP_
#define RCLCPP_RCLCPP_MEMORY_STRATEGIES_HPP_

//#include <rclcpp/strategies/heap_pool_memory_strategy.hpp>
//#include <rclcpp/strategies/stack_pool_memory_strategy.hpp>
#include <rclcpp/strategies/allocator_memory_strategy.hpp>

namespace rclcpp
{
namespace memory_strategies
{

using rclcpp::memory_strategies::allocator_memory_strategy::AllocatorMemoryStrategy;
//using rclcpp::memory_strategies::heap_pool_memory_strategy::HeapPoolMemoryStrategy;
//using rclcpp::memory_strategies::stack_pool_memory_strategy::StackPoolMemoryStrategy;

}  /* memory_strategies */

namespace memory_strategy {
  static MemoryStrategy::SharedPtr create_default_strategy() {
    return std::make_shared<memory_strategies::allocator_memory_strategy::AllocatorMemoryStrategy<>>();
  }
} /* memory_strategy */

}  /* rclcpp */

#endif
