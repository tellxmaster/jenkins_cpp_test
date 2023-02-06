pipeline {
    agent { label 'linux' }
    stages {
        stage('Build') {
            steps {
                sh 'g++ main.cpp -o main'
                sh 'echo "3\n1\n2\n0" | ./main > output.txt'
                sh 'cat output.txt'
                sh 'diff expected_output.txt output.txt'
            }
        }
    }
}
