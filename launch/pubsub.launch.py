import launch
import launch.actions
import launch.substitutions
import launch_ros.actions


def generate_launch_description():
    return launch.LaunchDescription([
        launch_ros.actions.Node(
            package='ros2-pub-sub', node_executable='ros2_pub_sub', output='screen',
            node_name=['talkerlistner']),
    ])
