pipeline {
    agent { label 'linux' }
    stages {
        stage('Build') {
            steps {
                sh 'g++ main.cpp -o main'
            }
        }
        stage('Test') {
            steps {
                sh 'echo "3\n1\n2\n0" | ./main > output.txt'
                sh 'diff expected_output.txt output.txt'
            }
        }
    }
}
